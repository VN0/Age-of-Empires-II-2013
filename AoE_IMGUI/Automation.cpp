#include "Automation.h"

#include "Sdk.h"
#include "Input.h"
#include "Engine.h"
#include "Renderer.h"

#include <math.h>

void Automation::OnInitialise()
{

}

void Automation::OnDraw()
{

}

void Automation::OnMenuMainWindow()
{

}

void Automation::OnMenuPlayerTreenode(Player * player, int playerIndex)
{

}

void Automation::OnPlayerIteration(Player * player, int playerIndex)
{
	if (playerIndex == 0 && Input::Get()->WasKeyPressed(VK_NUMPAD0))
	{
		int tcId = (int)EnumUnitDataId::TownCenter;

		std::vector<Unit*> tcList = player->GetUnitsByBaseId(tcId);

		float currentFood = player->Ressources->food;

		int threshold = 2;
		for (auto& tc : tcList)
		{
			if (currentFood >= 50 && tc->iQueuesize <= threshold)
			{
				tc->Select(player);

				if (tc->bIsSelected == 1)
				{
					Input::Get()->SendKey(0x41);
					//Input::Get()->SendKey(VK_ESCAPE);
					currentFood = currentFood - 50;
				}
			}
		}
	}
}

void Automation::OnUnitIteration(Unit* unit, Player* player, int playerIndex)
{
	/*static Vector2 pos = Vector2(1, 1);
	unit->MoveTo(pos);
	pos = Vector2(unit->vPos.x, unit->vPos.z);*/
}