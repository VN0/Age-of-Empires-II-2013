#include "Engine.h"

#include "Sdk.h"
#include "Offsets.h"
#include "Renderer.h"


#include <string>

Engine* Engine::instance = NULL;

Engine::Engine()
{
	base = (DWORD)GetModuleHandle(NULL);
}

Engine* Engine::Get()
{
	if (!instance)
	{
		instance = new Engine();
	}
	return instance;
}

Main* Engine::GetMain()
{
	return reinterpret_cast<Main*>(base + Offsets::main);
}

BaseGameScreen* Engine::GetBaseGameScreen()
{
	return reinterpret_cast<BaseGameScreen*>(base + Offsets::baseGameScreen);
}

int Engine::GetTotalPlayers()
{
	return *reinterpret_cast<int*>(base + Offsets::totalPlayers);
}

Vector2 Engine::worldToScreen(Vector3 position)
{
	int tile_width = 96;
	int tile_height = 96;
	BaseGameScreen* baseGameSreen = reinterpret_cast<BaseGameScreen*>(base + Offsets::baseGameScreen);

	float xDelta = position.x - baseGameSreen->gameScreenPtr->mainViewPtr->PosScreen.x;
	float yDelta = position.z - baseGameSreen->gameScreenPtr->mainViewPtr->PosScreen.y;

	int xResolution = baseGameSreen->gameScreenPtr->ScreenResX1;
	int yResolution = baseGameSreen->gameScreenPtr->ScreenResY1;

	float screenXfinal = ((xDelta + yDelta) / 2)*tile_width + (xResolution / 2);
	float screenYfinal = (((xDelta - yDelta) / 2)* tile_height * -1) / 2 + (yResolution / 2);

	screenYfinal -= position.y * 96 / 4;

	return Vector2(screenXfinal - tile_width / 2, screenYfinal - tile_height);
}

Vector2 Engine::worldToScreen(Vector2 position)
{
	return Engine::worldToScreen(Vector3(position.x, 0, position.y));
}

Vector2 Engine::worldToScreen(Unit* unit)
{
	return worldToScreen(unit->vPos);
}

void Engine::SendChatMessage(char * message, bool teamchat = false)
{
	typedef void(__stdcall * SendChatMessage)(char* message);
	static SendChatMessage sendChatMessage = (SendChatMessage)(base + Offsets::sendChat);

	if (teamchat)
	{
		std::string sMessage  = message;
		std::string teamMessage = std::string(";") + message;
		char* cstr = &teamMessage[0];
		sendChatMessage(cstr);
	}
	else
	{
		sendChatMessage(message);
	}
}

uint32_t Engine::GetPlayerColor(int colorIndex)
{
	return playerColors[colorIndex];
}

ImVec4 Engine::GetPlayerColorImGUI(int colorIndex)
{
	ImVec4 color;
	switch (colorIndex)
	{
	case 0:
		color = ImVec4(0, 0, 1, 1);
		break;
	case 1:
		color = ImVec4(1, 0, 0, 1);
		break;
	case 2:
		color = ImVec4(0, 1, 0, 1);
		break;
	case 3:
		color = ImVec4(1, 1, 0, 1);
		break;
	case 4:
		color = ImVec4(0, 1, 1, 1);
		break;
	case 5:
		color = ImVec4(1, 0, 1, 1);
		break;
	case 6:
		color = ImVec4(0.5, 0.5, 0.5, 1);
		break;
	case 7:
		color = ImVec4(1, 0.5, 0, 1);
		break;
	}
	return color;
}
