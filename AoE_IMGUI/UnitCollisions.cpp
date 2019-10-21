#include "UnitCollisions.h"

#include "Sdk.h"
#include "Renderer.h"
#include "Engine.h"
#include "Input.h"
#include "ConvexHull.h"


void DrawBox(Unit* unit, int32_t color)
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
}

void UnitCollisions::OnPlayerIteration(Player * player, int playerIndex)
{
	//if (playerIndex == 0)
	//{
		/*std::vector<Unit*> playerUnits = player->GetUnits();
		Vector2* unitPositions = new Vector2[playerUnits.size()];
		for (int i = 0; i < playerUnits.size(); i++)
		{
			unitPositions[i] = Engine::Get()->worldToScreen(Vector2(playerUnits[i]->vPos.x, playerUnits[i]->vPos.z));
		}
		ConvexHull ch = ConvexHull();
		std::vector<Vector2> chPoints = ch.convexHull(unitPositions, playerUnits.size());

		ImVec2* chPointsImVec = new ImVec2[chPoints.size()];
		for (int i = 0; i < chPoints.size(); i++)
		{
			chPointsImVec[i] = ImVec2(chPoints[i].x, chPoints[i].y);
		}
		Renderer::Get()->RenderPolygon(chPointsImVec, chPoints.size(), 0xffffffff, 4);*/
	//}
}

void UnitCollisions::OnUnitIteration(Unit* unit, Player* player, int playerIndex)
{
	if (playerEsp[playerIndex])
	{
		DrawBox(unit, colors_hex[playerIndex]);
	}
}

void UnitCollisions::OnMenuPlayerTreenode(Player * player, int playerIndex)
{
	if (ImGui::TreeNode("ESP"))
	{
		ImGui::PushItemWidth(100);
		ImGui::Checkbox("Enabled", &playerEsp[playerIndex]);
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

void UnitCollisions::OnNeutralUnit(Unit * unit)
{
	if (gaiaEsp)
	{
		//DrawBox(unit, 0xffffffff);
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
	}
}

void UnitCollisions::OnMenuMainWindow()
{
	ImGui::Checkbox("GaiaESP", &gaiaEsp);
}