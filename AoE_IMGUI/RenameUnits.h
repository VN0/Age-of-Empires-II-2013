#pragma once
#include "Feature.h"

class RenameUnits : public Feature
{
	char* lumberjack;
	char* goldminer;
	char* stoneminer;
	char* forager;
	char* farmer;
	char* shepherd;
	char* hunter;
	char* fisherman;

	//Callbacks
	void OnInitialise();
	void OnMenuMainWindow();
};