#include "CastleWarning.h"

#include "Sdk.h"
#include "Input.h"
#include "Engine.h"
#include "Renderer.h"

#include <string>

void CastleWarning::OnUnitIteration(Unit* unit, Player* player, int playerIndex)
{
	if (enabled && playerIndex != 0 && strcmp(unit->pUnitData->name, "CSTL") == 0)
	{
		float currentHealth = unit->fHealth;
		float maxHealth = unit->pUnitData->MaxHP;

		if (currentHealth < maxHealth) {
			int percentage = (int)((currentHealth / maxHealth) * 100);
			if (percentage % 5 == 0)
			{
				std::string message = player->name;
				message += " CASTLE (" + std::to_string(percentage) + " %)";
				char* cstr = &message[0];
				Engine::Get()->SendChatMessage(cstr, true);
			}
		}
	}
}

CastleWarning::CastleWarning()
{
	enabled = false;
}

void CastleWarning::OnMenuMainWindow()
{
	ImGui::Checkbox("Castle Warning", &enabled);
}