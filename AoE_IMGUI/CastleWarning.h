#pragma once
#include "Feature.h"

class CastleWarning : public Feature
{
	//Callbacks
	void OnMenuMainWindow();
	void OnUnitIteration(Unit* unit, Player* player, int playerIndex);

public:
	CastleWarning();
};