#pragma once
#include <cstdint>
#include <vector>

class Unit;
class ObjectManager;
class Player
{
public:
	char pad_0000[16]; //0x0000
	int32_t PriceCount; //0x0010
	class PriceTable *priceTablePtr; //0x0014
	class ObjectManager *objectManager; //0x0018
	char pad_001C[8]; //0x001C
	class VictoryConditions *victoryConditions; //0x0024
	char pad_0028[20]; //0x0028
	class Ressources *Ressources; //0x003C
	char pad_0040[60]; //0x0040
	int32_t Diplo0; //0x007C
	int32_t Diplo1; //0x0080
	int32_t Diplo2; //0x0084
	int32_t Diplo3; //0x0088
	int32_t Diplo4; //0x008C
	int32_t Diplo5; //0x0090
	int32_t Diplo6; //0x0094
	int32_t Diplo7; //0x0098
	int32_t Diplo8; //0x009C
	char pad_00A0[92]; //0x00A0
	class Color *colorPtr; //0x00FC
	char pad_0100[16]; //0x0100
	float camX; //0x0110
	float camY; //0x0114
	char pad_0118[68]; //0x0118
	class Unit *LastSelectedUnitPtr; //0x015C
	class Unit *SelectedUnitsArray[60]; //0x0160
	char pad_0250[4]; //0x0250
	int32_t SelectedUnitsCount; //0x0254
	char pad_0258[232]; //0x0258
	int32_t WrongSelectedUnitsCount; //0x0340
	char pad_0344[6028]; //0x0344
	class PlayerName *pName; //0x1AD0
	char pad_1AD4[12]; //0x1AD4
	class Civilization *N00000C58; //0x1AE0
	char pad_1AE4[1588]; //0x1AE4


	std::vector<Unit*> GetUnitsByBaseId(int baseId);
	std::vector<Unit*> GetUnits();

}; //Size: 0x2118