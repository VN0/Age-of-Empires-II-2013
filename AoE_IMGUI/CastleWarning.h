#pragma once
#include "Feature.h"

class CastleWarning : public Feature
{
	//Callbacks
	void OnMenuMainWindow();
	void OnBuildingIteration(Unit* unit, Player* player, int playerIndex);

public:
	CastleWarning();
};