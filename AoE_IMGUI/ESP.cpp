#include "ESP.h"

#include "Sdk.h"
#include "Renderer.h"
#include "Engine.h"
#include "Input.h"


void ESP::DrawBox(Unit* unit, int playerIndex, bool isBuilding, int32_t color)
{
	Vector3 one3 = unit->vPos;
	one3.x -= unit->pUnitData->collisionX;
	one3.z -= unit->pUnitData->collisionY;
	Vector2 one = Engine::Get()->worldToScreen(one3);

	Vector3 two3 = unit->vPos;
	two3.x += unit->pUnitData->collisionX;
	two3.z += unit->pUnitData->collisionY;
	Vector2 two = Engine::Get()->worldToScreen(two3);

	Vector3 three3 = unit->vPos;
	three3.x -= unit->pUnitData->collisionX;
	three3.z += unit->pUnitData->collisionY;
	Vector2 three = Engine::Get()->worldToScreen(three3);

	Vector3 four3 = unit->vPos;
	four3.x += unit->pUnitData->collisionX;
	four3.z -= unit->pUnitData->collisionY;
	Vector2 four = Engine::Get()->worldToScreen(four3);

	ImVec2 ivOne = ImVec2(one.x, one.y);
	ImVec2 ivTwo = ImVec2(two.x, two.y);
	ImVec2 ivThree = ImVec2(three.x, three.y);
	ImVec2 ivFour = ImVec2(four.x, four.y);

	
	Renderer::Get()->RenderRect(ivOne, ivFour, ivTwo, ivThree, color);

	if ((isBuilding && playerBuildingNameEsp[playerIndex]) || (!isBuilding && playerUnitNameEsp[playerIndex]))
	{
		Vector3 textPos = unit->vPos;
		Vector2 screenTextPos = Engine::Get()->worldToScreen(textPos);
		ImVec2 ivTextPos = ImVec2(screenTextPos.x, screenTextPos.y);
		Renderer::Get()->RenderText(unit->pUnitData->name, ivTextPos, 16, color, false);
	}
}

void ESP::DrawDestination(Unit* unit, int playerIndex)
{
	bool canHaveDestination = unit->mileage > 0 && unit->fHealth > 0;
	if (canHaveDestination)
	{
		bool pointersNotNull = unit->pTarget != nullptr && unit->pTarget->pTarget != nullptr && unit->pTarget->pTarget->pTargetData != nullptr;
		if (pointersNotNull)
		{
			Vector2 destGamePos = unit->pTarget->pTarget->pTargetData->Destination;
			if (destGamePos.x > 0 && destGamePos.y > 0)
			{
				Vector2 destPosition = Engine::Get()->worldToScreen(destGamePos);
				Vector2 unitPosition = Engine::Get()->worldToScreen(unit);
				Renderer::Get()->RenderLine(ImVec2(unitPosition.x, unitPosition.y), ImVec2(destPosition.x, destPosition.y), colors_hex[playerIndex], 0.5f);
			}
		}
	}
}


void ESP::OnUnitIteration(Unit* unit, Player* player, int playerIndex)
{
	if (playerUnitEsp[playerIndex])
	{
		DrawBox(unit, playerIndex, false, colors_hex[playerIndex]);
		if (playerUnitDestinationEsp[playerIndex])
		{
			DrawDestination(unit, playerIndex);
		}
	}
}

void ESP::OnBuildingIteration(Unit* unit, Player* player, int playerIndex)
{
	if (playerBuildingEsp[playerIndex])
	{
		DrawBox(unit, playerIndex, true, colors_hex[playerIndex]);
	}
}

void ESP::OnMenuPlayerTreenode(Player * player, int playerIndex)
{
	if (ImGui::TreeNode("ESP"))
	{
		ImGui::PushItemWidth(100);
		ImGui::Checkbox("Unit", &playerUnitEsp[playerIndex]);
		ImGui::Checkbox("Unit Name", &playerUnitNameEsp[playerIndex]);
		ImGui::Checkbox("Unit Destination", &playerUnitDestinationEsp[playerIndex]);
		ImGui::Checkbox("Building", &playerBuildingEsp[playerIndex]);
		ImGui::Checkbox("Building Name", &playerBuildingNameEsp[playerIndex]);
		if (ImGui::ColorPicker3("Color", colors[playerIndex],ImGuiColorEditFlags_NoPicker || ImGuiColorEditFlags_NoOptions || ImGuiColorEditFlags_NoSmallPreview ||  ImGuiColorEditFlags_NoInputs ||  ImGuiColorEditFlags_NoTooltip ||  ImGuiColorEditFlags_NoLabel || ImGuiColorEditFlags_NoSidePreview || ImGuiColorEditFlags_NoDragDrop))
		{
			int r = colors[playerIndex][0] * 255;
			int g = colors[playerIndex][1] * 255;
			int b = colors[playerIndex][2] * 255;
			colors_hex[playerIndex] = ((0xff) << 24) + ((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff);
		}
		ImGui::TreePop();
	}
}

void ESP::OnNeutralUnit(Unit * unit)
{
	if (gaiaEsp)
	{
		std::string unitName = unit->pUnitData->name;
		Vector2 screenPos = Engine::Get()->worldToScreen(unit);
		if (strcmp(unitName.c_str(), "BOARX") == 0)
		{
			Renderer::Get()->RenderCircleFilled(ImVec2(screenPos.x, screenPos.y), 40, 0x4000ff00);
			Renderer::Get()->RenderText(unitName, ImVec2(screenPos.x, screenPos.y), 16, 0xffffffff);
		}
		if (strcmp(unitName.c_str(), "SHEEPG") == 0)
		{
			Renderer::Get()->RenderCircleFilled(ImVec2(screenPos.x, screenPos.y), 40, 0x400000ff);
			Renderer::Get()->RenderText(unitName, ImVec2(screenPos.x, screenPos.y), 16, 0xffffffff);
		}
		if (strcmp(unitName.c_str(), "WOLFX") == 0)
		{
			Renderer::Get()->RenderCircleFilled(ImVec2(screenPos.x, screenPos.y), 40, 0x40ff0000);
			Renderer::Get()->RenderText(unitName, ImVec2(screenPos.x, screenPos.y), 16, 0xffffffff);
		}

		if (strcmp(unitName.c_str(), "FISHX") == 0 || strcmp(unitName.c_str(), "FISH1") == 0 || strcmp(unitName.c_str(), "FISH2") == 0 || strcmp(unitName.c_str(), "FISH3") == 0 || strcmp(unitName.c_str(), "FISH4") == 0)
		{
			Renderer::Get()->RenderCircleFilled(ImVec2(screenPos.x, screenPos.y), 40, 0x400000ff);
			Renderer::Get()->RenderText(unitName, ImVec2(screenPos.x, screenPos.y), 16, 0xffffffff);
		}
		if (strcmp(unitName.c_str(), "RELIC") == 0)
		{
			Renderer::Get()->RenderCircleFilled(ImVec2(screenPos.x, screenPos.y), 40, 0x40ffffff);
			Renderer::Get()->RenderText(unitName, ImVec2(screenPos.x, screenPos.y), 16, 0xffffffff);
		}
	}
}

void ESP::OnMenuMainWindow()
{
	ImGui::Checkbox("GaiaESP", &gaiaEsp);
}