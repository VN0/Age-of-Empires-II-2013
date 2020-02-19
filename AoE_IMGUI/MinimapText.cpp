#include "MinimapText.h"

#include "RegisterHook.h"
#include "DetourHook.h"
#include "Engine.h"
#include "Sdk.h"
#include "Renderer.h"



int32_t returnBytesLocation = 0;
bool hookEnabled = true;


void __fastcall GenericMinimapHook(RegisterHook::x86_registers* reg)
{
	static char* original = new char[100];
	static char* newText = new char[100];

	
	if (!hookEnabled)
	{
		return;
	}

	strcpy(original, (char*)reg->edi);
	Player* currentPlayer = Engine::Get()->GetPlayerByName(original);
	if (!currentPlayer)
	{
		return;
	}
	Ressources* ressources = currentPlayer->Ressources;
	sprintf(newText, "%s W:%d F:%d G:%d S:%d P:%d", original, (int)ressources->wood, (int)ressources->food, (int)ressources->gold, (int)ressources->stone, (int)ressources->CurrentPop);
	strcpy((char*)reg->edi, newText);
}


REGISTER_HOOK(GenericMinimapHook, returnBytesLocation)

void MinimapText::OnInitialise()
{
	int32_t minimapHookOffset = (int32_t)GetModuleHandle(NULL) + 0x2c84b8;
	
	minimapHook = new DetourHook();


	returnBytesLocation = (int32_t)minimapHook->Hook((PBYTE)minimapHookOffset, (PBYTE)GenericMinimapHookTrampoline, 5);
}

void MinimapText::OnShutdown()
{
	hookEnabled = false;
	minimapHook->Unhook();
}

void MinimapText::OnMenuMainWindow()
{
	ImGui::Checkbox("Minimap Ressource Information", &hookEnabled);
}