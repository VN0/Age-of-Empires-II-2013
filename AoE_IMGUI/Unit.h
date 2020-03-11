#pragma once
#include <cstdint>


#include "Classes.h"
class Player;

class UnitData
{
public:
	char pad_0000[4]; //0x0000
	int32_t Type; //0x0004
	int32_t languageFileName; //0x0008
	int32_t languageFileCreation; //0x000C
	int16_t ID; //0x0010
	int16_t Copy_ID; //0x0012
	int16_t Base_ID; //0x0014
	int16_t Class; //0x0016
	void *standingGraphicPtr; //0x0018
	char pad_001C[4]; //0x001C
	void *dyingGraphicPtr; //0x0020
	char pad_0024[6]; //0x0024
	int16_t MaxHP; //0x002A
	float LOS; //0x002C
	int16_t garisonCapacity; //0x0030
	char pad_0032[2]; //0x0032
	float collisionX; //0x0034
	float collisionY; //0x0038
	float collisionZ; //0x003C
	void *soundPtr; //0x0040
	void *soundPtr2; //0x0044
	char pad_0048[8]; //0x0048
	int16_t DeadUnitTypeID; //0x0050
	int16_t sortNumber; //0x0052
	int16_t icon; //0x0054
	int16_t hideInEditor; //0x0056
	char pad_0058[2]; //0x0058
	int16_t isAvailableForTraining; //0x005A
	char pad_005C[8]; //0x005C
	float clearanceSizeX; //0x0064
	float clearanceSizeY; //0x0068
	int8_t hillMode; //0x006C
	char pad_006D[1]; //0x006D
	int16_t validTerrain; //0x006E
	int16_t projectilesMaybe; //0x0070
	int16_t ressourceStorageType1; //0x0072
	int16_t ressourceStorageType2; //0x0074
	int16_t ressourceStorageType3; //0x0076
	float ressourceStorageAmount1; //0x0078
	float ressourceStorageAmount2; //0x007C
	float ressourceStorageAmount3; //0x0080
	int32_t ressourceCapacity; //0x0084
	float ressourceDecay; //0x0088
	float attributeModeMaybe; //0x008C
	uint8_t ressourceStorageMode1; //0x0090
	uint8_t ressourceStorageMode2; //0x0091
	uint8_t ressourceStorageMode3; //0x0092
	uint8_t blastDefenceLevel; //0x0093
	uint8_t combatLevel; //0x0094
	uint8_t interactionMode; //0x0095
	uint8_t minimapMode; //0x0096
	uint8_t interfaceKind; //0x0097
	uint8_t minimapColor; //0x0098
	uint8_t atkReactionObsolete; //0x0099
	char pad_009A[1]; //0x009A
	uint8_t N00000EF4; //0x009B
	void *dmgGraphicForBuildingPtr; //0x009C
	uint8_t occlusionMode; //0x00A0
	uint8_t obstructionType; //0x00A1
	uint8_t blockageClass; //0x00A2
	char pad_00A3[1]; //0x00A3
	int16_t unitAttributes; //0x00A4
	char pad_00A6[6]; //0x00A6
	int32_t langFileHelp; //0x00AC
	char pad_00B0[12]; //0x00B0
	int32_t langFileHotkeyText; //0x00BC
	int32_t hotkey; //0x00C0
	int16_t projectilesMaybe2; //0x00C4
	char pad_00C6[2]; //0x00C6
	uint8_t selectionEffect; //0x00C8
	uint8_t editorSelectColor; //0x00C9
	char pad_00CA[2]; //0x00CA
	float selectionOutlineX; //0x00CC
	float selectionOutlineY; //0x00D0
	float selectionOutlineZ; //0x00D4
	char *name; //0x00D8
	int16_t unkInt16; //0x00DC
	char pad_00DE[6]; //0x00DE
	float speed; //0x00E4
	void *walkingGraphicPtr; //0x00E8
	void *runningGraphicPtr; //0x00EC
	float rotationSpeed; //0x00F0
	char pad_00F4[2]; //0x00F4
	int16_t trailingUnit; //0x00F6
	int16_t trailMode; //0x00F8
	char pad_00FA[2]; //0x00FA
	float trailDensity; //0x00FC
	char pad_0100[8]; //0x0100
	float turnRadiusSpeed; //0x0108
	float maxYPSMoving; //0x010C
	float YawRoundTime; //0x0110
	float maxYPSStationary; //0x0114
	void *taskListPtr; //0x0118
	int16_t defaultTask; //0x011C
	char pad_011E[2]; //0x011E
	float searchRadius; //0x0120
	float workRate; //0x0124
	int16_t dropSite1; //0x0128
	int16_t dropSite2; //0x012A
	uint8_t taskSwapGroup; //0x012C
	char pad_012D[3]; //0x012D
	void *sounds3Ptr; //0x0130
	void *sounds4Ptr; //0x0134
	char pad_0138[4]; //0x0138
	void *atkGraphicPtr; //0x013C
	int16_t baseArmor; //0x0140
	int16_t numberOfArmorType; //0x0142
	void *armorsPtr; //0x0144
	int32_t numberOfAtkType; //0x0148
	void *atkPtr; //0x014C
	int16_t terrainDefenceBonus; //0x0150
	char pad_0152[2]; //0x0152
	float range; //0x0154
	float blastRadius; //0x0158
	float blastAtkLevel; //0x015C
	float reloadTime; //0x0160
	int16_t projectileUnit; //0x0164
	int16_t accuracyPercent; //0x0166
	char pad_0168[2]; //0x0168
	int16_t atkDelayFrame; //0x016A
	float graphicDisplacementX; //0x016C
	float graphicDisplacementY; //0x0170
	float graphicDisplacementZ; //0x0174
	float minimumRange; //0x0178
	int16_t displayedMeleeArmor; //0x017C
	int16_t displayedMeleeAtk; //0x017E
	float displayedRange; //0x0180
	float displayedReloadTime; //0x0184
	float atkDispersion; //0x0188
	int16_t costType1; //0x018C
	int16_t costAmount1; //0x018E
	int16_t costPaid1; //0x0190
	int16_t costType2; //0x0192
	int16_t costAmount2; //0x0194
	int16_t costPaid2; //0x0196
	int16_t costType3; //0x0198
	int16_t costAmount3; //0x019A
	int16_t costPaid3; //0x019C
	int16_t trainTime; //0x019E
	int16_t trainLocation; //0x01A0
	int16_t trainButton; //0x01A2
	int16_t displayedPierceArmor; //0x01A4
	char pad_01A6[10]; //0x01A6
	uint8_t creatableTypeObsolete; //0x01B0
	char pad_01B1[3]; //0x01B1
	float totalProjectiles; //0x01B4
	uint8_t maxTotalProjectiles; //0x01B8
	char pad_01B9[3]; //0x01B9
	float projectileSpawnWidth; //0x01BC
	float projectileSpawnHeight; //0x01C0
	float projectileSpawnRandomness; //0x01C4
	int32_t secondaryProjectileUnitId; //0x01C8
	int32_t specialGraphic; //0x01CC
	uint8_t N00000458; //0x01D0
	uint8_t heroMode; //0x01D1
	uint8_t projectiles4; //0x01D2
	char pad_01D3[1]; //0x01D3
	void *garrisonGraphicPtr; //0x01D4
	void *sounds5Ptr; //0x01D8
	void *constructionGraphicPtr; //0x01DC
	void *snowGraphicPtr; //0x01E0
	uint8_t adjacentMode; //0x01E4
	char pad_01E5[3]; //0x01E5
}; //Size: 0x01E8

class Unit
{

public:
	char pad_0000[8]; //0x0000
	int32_t iNetworkID; //0x0008
	UnitData *pUnitData; //0x000C
	Player *pOwner; //0x0010
	void *currentGraphicPtr; //0x0014
	void *currentGraphic2Ptr; //0x0018
	char pad_001C[24]; //0x001C
	float fHealth; //0x0034
	int16_t unk_38; //0x0038
	int16_t bIsSelected; //0x003A
	Vector3 vPosReadOnly; //0x003C
	float RessourcesCarryingCount; //0x0048
	int32_t iStatus; //0x004C
	char pad_0050[50]; //0x0050
	int16_t deadMaybe; //0x0082
	int32_t issuedOrder; //0x0084
	int32_t moving; //0x0088
	char pad_008C[4]; //0x008C
	double totalMileage; //0x0090
	char pad_0098[4]; //0x0098
	float strangeX; //0x009C
	float strangeY; //0x00A0
	float strangeZ; //0x00A4
	float vectorX; //0x00A8
	float vectorY; //0x00AC
	float vectorZ; //0x00B0
	float selectionX; //0x00B4
	float selectionY; //0x00B8
	float selectionZ; //0x00BC
	float velocity; //0x00C0
	char pad_00C4[20]; //0x00C4
	uint8_t rotation1; //0x00D8
	uint8_t rotation2; //0x00D9
	uint8_t rotation3; //0x00DA
	uint8_t rotation4; //0x00DB
	char pad_00DC[28]; //0x00DC
	class RallyArray *pRallyArray; //0x00F8
	int32_t RallyCount; //0x00FC
	char pad_0100[4]; //0x0100
	Vector3 vPos; //0x0104
	float Rotation; //0x0110
	char pad_0114[32]; //0x0114
	int32_t mileage; //0x0134
	char pad_0138[24]; //0x0138
	class TargetPtr *pTarget; //0x0150
	char pad_0154[1]; //0x0154
	int8_t commandsReceivedCount; //0x0155
	char pad_0156[2]; //0x0156
	int32_t AssignatedKey; //0x0158
	char pad_015C[52]; //0x015C
	float reloadCooldown; //0x0190
	char pad_0194[56]; //0x0194
	float projectilesCount; //0x01CC
	char pad_01D0[76]; //0x01D0
	int16_t iQueuesize; //0x021C
	char pad_021E[4]; //0x021E


	void Select(Player* player);


	void MoveTo(Vector2 pos, bool deselectAfterMove = false);
	float GetDistance(Unit* other);
	float GetDistance(Vector2 pos);


	Vector2 GetDestination();

}; //Size: 0x0222