#pragma once
#include "Feature.h"

class DetourHook;
class MinimapText : public Feature
{
	DetourHook* minimapHook;

	//Callbacks
	void OnInitialise();
	void OnMenuMainWindow();
	void OnShutdown();
};