#pragma once
#include <Windows.h>
#include <iostream>

#include "../ImGui/imgui.h"
#include "../ImGui/imgui_impl_dx9.h"
#include "../ImGui/imgui_impl_win32.h"
#include "../ImGui/imgui_internal.h"


#include "Sdk.h"
#include "Renderer.h"
#include "Core.h"
#include "Engine.h"
#include "FeatureManager.h"

//Features
#include "ESP.h"
#include "Maphack.h"
#include "ResourceInformation.h"
#include "Automation.h"
#include "CastleWarning.h"
#include "RenameUnits.h"
#include "MinimapText.h"
//#include "ConvexHullESP.h"

Core::Core()
{
	//Register Features here
	FeatureManager::Get()->registerFeature(new ESP());
	FeatureManager::Get()->registerFeature(new CastleWarning());
	FeatureManager::Get()->registerFeature(new ResourceInformation());
	//FeatureManager::Get()->registerFeature(new Automation());
	FeatureManager::Get()->registerFeature(new MinimapText());
	//FeatureManager::Get()->registerFeature(new ConvexHullESP());
	//FeatureManager::Get()->registerFeature(new RenameUnits());
	FeatureManager::Get()->registerFeature(new Maphack());

	FeatureManager::Get()->OnInitialise();
}

void createPlayerTreeNode(Player* player, int playerIndex)
{
	ImGui::PushStyleColor(ImGuiCol_Text, Engine::Get()->GetPlayerColorImGUI(player->colorPtr->playerColor));
	if (ImGui::TreeNode((char*)player->name))
	{
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 1, 1, 1));
		ImGui::Text("Player %x", player);
		FeatureManager::Get()->OnMenuPlayerTreenode(player, playerIndex);
		if (ImGui::TreeNode("Units"))
		{
			int buildingCount = 0;
			int infantryCount = 0;
			int calavaryCount = 0;
			for (int i = 0; i < player->objectManager->iObjectCount; i++)
			{
				Unit* unit = player->objectManager->units[i];
				if (!unit) { continue; }

				if (unit->pOwner == player)
				{
					ImGui::Text("%x", unit);
					ImGui::SameLine();
					ImGui::Text("%s", unit->pUnitData->name);
					ImGui::SameLine();
					ImGui::Text("%d", unit->pUnitData->Class);

					if (unit->pUnitData->Class == (int16_t)EnumUnitDataClass::Building)
					{
						buildingCount++;
					}
					if (unit->pUnitData->Class == (int16_t)EnumUnitDataClass::Infantry)
					{
						infantryCount++;
					}
					if (unit->pUnitData->Class == (int16_t)EnumUnitDataClass::Cavalry)
					{
						calavaryCount++;
					}
				}
			}
			ImGui::Text("Buildings %.d", buildingCount);
			ImGui::Text("Infantry %.d", infantryCount);
			ImGui::Text("Cavalry %.d", calavaryCount);
			ImGui::TreePop();
		}
		ImGui::TreePop();
		ImGui::PopStyleColor();
	}
	ImGui::PopStyleColor();
}

void Core::OnEndscene()
{
	__try
	{
		BaseGameScreen* baseGameScreen = Engine::Get()->GetBaseGameScreen();
		if (!baseGameScreen)
		{
			return;
		}

		if (!baseGameScreen->gameScreenPtr)
		{
			ImGui::Begin("AoE Hackbase - BDKPlayer", (bool*)0, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoNav);
			ImGui::Text("Waiting for game to start...");
			ImGui::End();
			return;
		}

		Main* main = Engine::Get()->GetMain();
		if (!main)
		{
			return;
		}

		GameData* gameData = main->GameData;
		if (!gameData)
		{
			return;
		}
		PlayerArray* playerArray = gameData->pPlayerArray;
		if (!gameData)
		{
			return;

		}
		int totalPlayers = Engine::Get()->GetTotalPlayers();

		
		static bool openOverlay = true;
		if (GetAsyncKeyState(VK_INSERT) & 1) { openOverlay = !openOverlay; }

		Renderer::Get()->BeginScene();
		FeatureManager::Get()->OnDraw();
		Player* gaiaPlayer = *(Player**)(playerArray);

		if (gaiaPlayer)
		{
			for (int i = 0; i < gaiaPlayer->objectManager->iObjectCount; i++)
			{
				Unit* unit = gaiaPlayer->objectManager->units[i];
				if (!unit)
				{
					continue;
				}
				FeatureManager::Get()->OnNeutralUnit(unit);
			}
		}

		for (int i = 0; i < totalPlayers; i++)
		{
			Player* player = playerArray->playerData[i].player;
			if (!player)
			{
				continue;
			}
			FeatureManager::Get()->OnPlayerIteration(player, i);
			for (int j = 0; j < player->objectManager->iObjectCount; j++)
			{
				Unit* unit = player->objectManager->units[j];
				if (!unit)
				{
					continue;
				}
				FeatureManager::Get()->OnUnitIteration(unit, player, i);
			}
		}

		Renderer::Get()->EndScene();

		ImGui::SetNextWindowBgAlpha(0.35f);
		if (openOverlay)
		{
			__try
			{
				if (ImGui::Begin("Age of Empires 2 HD", &openOverlay, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoNav))
				{
					for (int i = 0; i < totalPlayers; i++)
					{
						createPlayerTreeNode(playerArray->playerData[i].player, i);
					}
					FeatureManager::Get()->OnMenuMainWindow();
				}
			}
			__finally
			{
				ImGui::End();
			}
		}
	}
	__except (1)
	{
		if (Renderer::Get()->inFrame)
		{
			Renderer::Get()->EndScene();
		}
	}
}