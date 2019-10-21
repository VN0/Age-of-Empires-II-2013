#pragma once
#include <Windows.h>
#include <cstdint>


enum class KeyState
{
	None = 1,
	Down,
	Up,
	Pressed /*Down and then up*/
};

DEFINE_ENUM_FLAG_OPERATORS(KeyState);

class Input
{
	static Input* instance;

	Input();

public:
	static Input* Get();

	KeyState      GetKeyState(uint32_t vk);
	bool          IsKeyDown(uint32_t vk);
	bool          WasKeyPressed(uint32_t vk);
	void		  SendKey(uint32_t vk);

	int GetMouseX();
	int GetMouseY();
	
	bool IsMouseInRegion(int x1, int y1, int x2, int y2);
	bool ProcessMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	bool ProcessMouseMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
	bool ProcessKeybdMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

	KeyState       m_iKeyMap[256];
	int mouseX;
	int mouseY;
};