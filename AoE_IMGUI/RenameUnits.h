#pragma once
#include "Feature.h"

class RenameUnits : public Feature
{
	char* lumberjack;

	//Callbacks
	void OnInitialise();
	void OnMenuMainWindow();
};