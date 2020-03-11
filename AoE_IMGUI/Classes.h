#pragma once
// Generated using ReClass 2016
#include <cstdint>



enum class EnumUnitDataClass : int16_t
{
	InvalidClass = -1,
	Archer = 0,
	Artifact = 1,
	TradeBoat = 2,
	Building = 3,
	Civilian = 4,
	OceanFish = 5,
	Infantry = 6,
	BerryBush = 7,
	StoneMine = 8,
	PreyAnimal = 9,
	PredatorAnimal = 10,
	Miscellaneous = 11,
	Cavalry = 12,
	SiegeWeapon = 13,
	Terrain = 14,
	Tree = 15,
	TreeStump = 16,
	Healer = 17,
	Monk = 18,
	TradeCart = 19,
	TransportBoat = 20,
	FishingBoat = 21,
	Warship = 22,
	Conquistador = 23,
	WarElephant = 24,
	Hero = 25,
	ElephantArcher = 26,
	Wall = 27,
	Phalanx = 28,
	DomesticAnimal = 29,
	Flag = 30,
	DeepSeaFish = 31,
	GoldMine = 32,
	ShoreFish = 33,
	Cliff = 34,
	Petard = 35,
	CavalryArcher = 36,
	Doppelganger = 37,
	Bird = 38,
	Gate = 39,
	SalvagePile = 40,
	ResourcePile = 41,
	Relic = 42,
	MonkWithRelic = 43,
	HandCannoneer = 44,
	TwoHandedSwordsman = 45,
	Pikeman = 46,
	Scout = 47,
	OreMine = 48,
	Farm = 49,
	Spearman = 50,
	PackedUnit = 51,
	Tower = 52,
	BoardingBoat = 53,
	UnpackedSiegeUnit = 54,
	Ballista = 55,
	Raider = 56,
	CavalryRaider = 57,
	Livestock = 58,
	King = 59,
	MiscBuilding = 60,
	ControlledAnimal = 61
};


enum class EnumUnitDataId
{
	FemaleIdleVillager = 293,
	MaleShepherd = 592,
	FemaleShepherd = 590,
	MaleForager = 120,
	FemaleForager = 354,
	MaleHunter = 122,
	FemaleHunter = 216,
	MaleFisherman = 56,
	FemaleFisherman = 57,
	MaleFarmer = 259,
	FemaleFarmer = 214,
	MaleLumberjack = 123,
	FemaleLumberjack = 218,
	MaleGoldMiner = 579,
	FemaleGoldMiner = 581,
	MaleStoneMiner = 124,
	FemaleStoneMiner = 220,
	MaleBuilder = 118,
	FemaleBuilder = 212,
	MaleRepairer = 156,
	FemaleRepairer = 222,
	TradeCartLoadEmpty = 128,
	TradeCartLoadFull = 204,
	EmperorinaBarrel = 733,
	FishingShip = 13,
	TradeCog = 17,
	TransportShip = 545,
	Galley = 539,
	WarGalley = 21,
	Galleon = 442,
	DemolitionShip = 527,
	HeavyDemolitionShip = 528,
	FireShip = 529,
	FastFireShip = 532,
	CannonGalleon = 420,
	EliteCannonGalleon = 691,
	Longboat = 250,
	EliteLongboat = 533,
	TurtleShip = 831,
	EliteTurtleShip = 832,
	AdmiralYiSunshin = 844,
	Saboteur = 706,
	Monk = 125,
	Missionary = 775,
	Archbishop = 177,
	FriarTuck = 163,
	Imam = 842,
	PopeLeoI = 781,
	MonkwithRelic = 286,
	Militia = 74,
	Manatarms = 75,
	LongSwordman = 77,
	TwoHandedSwordman = 473,
	Champion = 567,
	Spearman = 93,
	Pikeman = 358,
	Halberdier = 359,
	CastleHuskarl = 41,
	CastleEliteHuskarl = 555,
	Berserk = 692,
	EliteBerserk = 694,
	EagleWarrior = 751,
	EliteEagleWarrior = 752,
	JaguarWarrior = 725,
	EliteJaguarWarrior = 726,
	Samurai = 291,
	EliteSamurai = 560,
	TeutonicKnight = 25,
	EliteTeutonicKnight = 554,
	ThrowingAxeman = 281,
	EliteThrowingAxeman = 531,
	WoadRaider = 232,
	EliteWoadRaider = 534,
	BarracksHuskarl = 759,
	BarracksEliteHuskarl = 761,
	Aethelfirth = 169,
	Charlemagne = 165,
	CharlesMartel = 424,
	ElCid = 198,
	EriktheRed = 171,
	HaraldHardraade = 426,
	HrolftheGanger = 428,
	JoantheMaid = 430,
	KingArthur = 173,
	Kitabatake = 195,
	LaHire = 640,
	Minamoto = 196,
	Nobunaga = 845,
	SaythanWildWoman = 783,
	SheriffofNottingham = 164,
	Siegfried = 170,
	TheodorictheGoth = 168,
	WilliamWallace = 432,
	Archer = 4,
	Crossbowman = 24,
	Arbalest = 492,
	Skirmisher = 7,
	EliteSkirmisher = 6,
	ChuKoNu = 73,
	EliteChuKoNu = 559,
	Longbowman = 8,
	EliteLongbowman = 530,
	PlumedArcher = 763,
	ElitePlumedArcher = 765,
	ArchersoftheEyes = 686,
	LorddeGraville = 642,
	RobinHood = 200,
	CavalryArcher = 39,
	HeavyCavalryArcher = 474,
	Mangudai = 11,
	EliteMangudai = 561,
	WarWagon = 827,
	EliteWarWagon = 829,
	GenghisKhan = 731,
	Subotai = 698,
	Tamerlane = 172,
	Genitour = 583,
	EliteGenitour = 596,
	HandCannoneer = 5,
	Janissary = 46,
	EliteJanissary = 557,
	ScoutCavalry = 448,
	LightCavalry = 546,
	Hussar = 441,
	Knight = 38,
	Cavalier = 283,
	Paladin = 569,
	Camel = 329,
	HeavyCamel = 330,
	Cataphract = 40,
	EliteCataphract = 553,
	Mameluke = 282,
	EliteMameluke = 556,
	Tarkan = 755,
	EliteTarkan = 757,
	WarElephant = 239,
	EliteWarElephant = 558,
	AlesanderNevski = 197,
	AttilatheHun = 777,
	Belisarius = 167,
	BledatheHun = 779,
	ConstableRichemont = 646,
	DukeDAlenon = 638,
	ElCidCampeador = 824,
	FrankishPaladin = 632,
	Gawain = 175,
	GuyJosselyne = 648,
	HenryV = 847,
	JoanofArc = 629,
	Kushluk = 702,
	Lancelot = 174,
	MasteroftheTemplar = 680,
	Mordred = 176,
	ReynalddeChatillon = 678,
	RichardtheLionhearted = 160,
	Roland = 166,
	ScythianScout = 852,
	SieurBertrand = 636,
	SieurdeMetz = 634,
	SirJohnFastolf = 652,
	TheBlackPrince = 161,
	WilliamtheConqueror = 849,
	BatteringRam = 35,
	CappedRam = 422,
	SiegeRam = 548,
	Mangonel = 280,
	Onager = 550,
	SiegeOnager = 588,
	BombardCannon = 36,
	JeanBureau = 650,
	JeandeLorrain = 644,
	COBRA = 748,
	Scorpion = 279,
	HeavyScorpion = 542,
	Conquistador = 771,
	EliteConquistador = 773,
	Petard = 440,
	TrebuchetUnpacked = 42,
	BadNeighborUnpacked = 682,
	GodsownSlingUnpacked = 683,
	TrebuchetPacked = 331,
	BadNeighborPacked = 730,
	GodsownSlingPacked = 729,
	King = 434,
	KingAlfonso = 840,
	KingSancho = 838,
	Shah = 704,
	Horse = 814,
	Deer = 65,
	WildHorse = 835,
	Jaguar = 812,
	WildBoar = 48,
	Wolf = 126,
	FurioustheMonkeyBoy = 860,
	HuntingWolf = 700,
	OrnlutheWolf = 707,
	DireWolf = 89,
	IronBoar = 810,
	Javelina = 822,
	RabidWolf = 202,
	Sheep = 594,
	Turkey = 833,
	BambooForestTree = 348,
	ForestTree = 411,
	JungleTree = 414,
	OakForestTree = 394,
	PalmForestTree = 351,
	PineForestTree = 350,
	SnowPineTree = 413,
	TreeA = 399,
	TreeB = 400,
	TreeC = 401,
	TreeD = 402,
	TreeE = 403,
	TreeF = 404,
	TreeG = 405,
	TreeH = 406,
	TreeI = 407,
	TreeJ = 408,
	TreeK = 409,
	TreeL = 410,
	TreeTD = 284,
	Crater = 723,
	ForageBush = 59,
	GoldMine = 66,
	StoneMine = 102,
	ShoreFish = 69,
	FishDorado = 455,
	FishPerch = 53,
	FishSalmon = 456,
	FishSnapper = 458,
	FishTuna = 457,
	GreatFishMarlin = 450,
	GreatFishMarlin2 = 451,
	Relic = 285,
	PieceoftheTrueCross = 688,
	Cliff = 264,
	Cliff2 = 265,
	Cliff3 = 266,
	Cliff4 = 267,
	Cliff5 = 268,
	Cliff6 = 269,
	Cliff7 = 270,
	Cliff8 = 271,
	Cliff9 = 272,
	House = 70,
	Mill = 68,
	LumberCamp = 562,
	MiningCamp = 584,
	Dock = 45,
	Market = 84,
	Blacksmith = 103,
	Monastery = 104,
	University = 209,
	TownCenter = 109,
	Outpost = 598,
	Barracks = 12,
	ArcheryRange = 87,
	Stable = 101,
	SiegeWorkshop = 49,
	Castle = 82,
	Wonder = 276,
	Cathedral = 599,
	DomeoftheRock = 690,
	GreatPyramid = 696,
	Mosque = 655,
	Pavilion = 624,
	Pavilion2 = 625,
	Pavilion3 = 626,
	Pyramid = 689,
	TradeWorkshop = 110,
	Yurt = 712,
	Yurt2 = 713,
	Yurt3 = 714,
	Yurt4 = 715,
	Yurt5 = 716,
	Yurt6 = 717,
	Yurt7 = 718,
	Yurt8 = 719,
	Farm9 = 50,
	FishTrap = 199,
	PalisadeWall = 72,
	StoneWall = 117,
	FortifiedWall = 155,
	ClosedGateHorizontal = 659,
	OpenedGateHorizontal = 661,
	ClosedGateDownwardSloping = 88,
	OpenedGateDownwardSloping = 91,
	ClosedGateVertical = 667,
	OpenedGateVertical = 669,
	ClosedGateUpwardSloping = 64,
	OpenedGateUpwardSloping = 78,
	WatchTower = 79,
	GuardTower = 234,
	Keep = 235,
	BombardTower = 236,
	TheAccursedTower = 684,
	TheTowerofFiles = 685,
	Monument = 826,
	ESFlag = 851,
	FlagA = 600,
	FlagB = 601,
	FlagC = 602,
	FlagD = 603,
	FlagE = 604,
	MapRevealer = 837,
	NineBands = 720,
	ShipwreckUpwardSloping = 721,
	ShipwreckDownwardSloping = 722,
	BridgeATop = 605,
	BridgeAMiddle = 606,
	BridgeABottom = 607,
	BridgeABrokenTop = 739,
	BridgeACracked = 738,
	BridgeABrokenBottom = 740,
	BridgeBTop = 608,
	BridgeBMiddle = 609,
	BridgeBBottom = 610,
	BridgeBBrokenTop = 742,
	BridgeBCracked = 741,
	BridgeBBrokenBottom = 743,
	BuildingRubble1x1 = 143,
	BuildingRubble2x2 = 144,
	BuildingRubble3x3 = 145,
	BuildingRubble4x4 = 146,
	BuildingRubble5x5 = 147,
	BuildingRubble6x6 = 148,
	Rubble1x1 = 863,
	Rubble2x2 = 864,
	Rubble3x3 = 865,
	Torch = 499,
	TorchConverting = 854,
	BrokenCart = 858,
	Cactus = 709,
	Cracks = 241,
	Flower1 = 334,
	Flower2 = 335,
	Flower3 = 336,
	Flower4 = 337,
	FlowerBed = 859,
	Grave = 820,
	HayStack = 857,
	Head = 821,
	Mountain1 = 310,
	Mountain2 = 311,
	Mountain3 = 744,
	Mountain4 = 745,
	OldStoneHead = 855,
	Path1 = 339,
	Path2 = 340,
	Path3 = 341,
	Path4 = 338,
	Plant = 818,
	Rock = 623,
	RomanRuins = 856,
	Rugs = 711,
	Ruins = 345,
	SeaRocks1 = 389,
	SeaRocks2 = 396,
	Sign = 819,
	Skelton = 710,
	Statue = 817,
	Stump = 809,
	StumpCommomTree = 415,
	StumpBambooForestTree = 737,
	ArrowFemaleHunter = 509,
	ArrowArcher = 363,
	ArrowCrossbowman = 364,
	ArrowLorddeGraville = 507,
	SpearSkirmisher = 365,
	SpearGenitourLine = 366,
	ArrowRobinHood = 511,
	ArrowChuKoNuLine = 510,
	ArrowTamerlane = 477,
	ArrowSubotai = 478,
	StoneMangonelLine = 369,
	ArrowScorpion = 367,
	ArrowHeavyScorpion = 627,
	StoneGodsownSling = 371,
	ArrowGalley = 540,
	ArrowWarGalley = 372,
	ArrowWarWagonLine = 373,
	ArrowLongboatLine = 512,
	ArrowTownCenter = 54,
	ArrowWatchTowerLine = 504,
	ArrowCastle = 746,
	FlamingArrowFemaleHunter = 521,
	FlamingArrowArcher = 466,
	FlamingArrowCrossbowman = 375,
	FlamingArrowLorddeGraville = 519,
	FlamingSpearSkirmisher = 376,
	FlamingSpearGenitourLine = 377,
	FlamingArrowRobinHood = 523,
	FlamingArrowChuKoNuLine = 522,
	FlamingArrowTamerlane = 475,
	FlamingArrowSubotai = 476,
	FlamingStoneMangonelLine = 468,
	FlamingArrowScorpion = 378,
	FlamingArrowHeavyScorpion = 628,
	FlamingStoneGodsownSling = 469,
	FlamingArrowGalley = 541,
	FlamingArrowWarGalley = 470,
	FlamingArrowWarWagonLine = 471,
	FlamingArrowLongboatLine = 524,
	FlamingArrowTownCenter = 328,
	FlamingArrowWatchTowerLine = 517,
	FlamingArrowCastle = 747,
	FireFireshipLine = 676,
	ExplosionSaboteur = 112,
	BulletCannonGalleonLine = 374,
	BulletAdmiralYiSunshin = 767,
	BulletCOBRA = 380,
	BulletJeanBureau = 368,
	AxeCharlemagne = 515,
	AxeMamelukeLine = 736,
	BulletBombardTower = 506,
	BodyMaleVillager = 224,
	BodyFemaleVillager = 211,
	BodyMaleShepherd = 593,
	BodyFemaleShepherd = 591,
	BodyMaleForager = 353,
	BodyFemaleForager = 355,
	BodyMaleHunter = 227,
	BodyFemaleHunter = 217,
	BodyMaleFisherman = 58,
	BodyFemaleFisherman = 60,
	BodyMaleFarmer = 226,
	BodyFemaleFarmer = 215,
	BodyMaleLumberjack = 228,
	BodyFemaleLumberjack = 219,
	BodyMaleStoneMiner = 229,
	BodyFemaleGoldMiner,
	BodyFemaleStoneMiner = 221,
	BodyMaleRepairer = 225,
	BodyFemaleRepairer = 213,
	BodyTradeCartLoadEmpty = 178,
	BodyEmperorinaBarrel = 205,
	BodyGenitourLine = 152,
	BodyManatarms = 154,
	BodyJoantheMaid = 180,
	BodyTwoHandedSwordman = 500,
	BodySiegfried = 568,
	BodySpearman = 140,
	BodyPikeman = 501,
	BodyHalberdier = 502,
	BodyEagleWarriorLine = 754,
	BodyArcher = 3,
	BodyCrossbowman = 26,
	BodyLorddeGraville = 496,
	BodySkirmisher = 238,
	BodyEliteSkirmisher = 100,
	BodyCavalryArcher = 34,
	BodySubotai = 631,
	BodyHandCannoneer = 98,
	BodyScoutCavalry = 449,
	BodyScythianScout = 547,
	BodyHussar = 480,
	BodySieurdeMetz = 111,
	BodyTheBlackPrince = 139,
	BodyRichardtheLionhearted = 570,
	BodyCamel = 113,
	BodyHeavyCamel = 495,
	BodyPopeLeoI = 134,
	BodyMissionary = 776,
	WreckageBatteringRam = 23,
	WreckageCappedRam = 423,
	WreckageSiegeRam = 549,
	WreckageMangonel = 121,
	WreckageOnager = 675,
	WreckageSiegeOnager = 589,
	WreckageScorpion = 149,
	WreckageHeavyScorpion = 543,
	WreckageJeandeLorrain = 16,
	BodyJanissaryLine = 107,
	BodyAethelfirth = 233,
	BodyWarElephantLine = 136,
	BodyBelisarius = 27,
	BodyConquistadorLine = 772,
	BodyJaguarWarriorLine = 750,
	BodyTarkanLine = 756,
	BodyTeutonicKnightLine = 181,
	BodyTheodorictheGoth = 62,
	BodyCharlesMartel = 157,
	BodyHaraldHardraade = 693,
	BodyHrolftheGanger = 695,
	BodyMamelukeLine = 244,
	BodyTamerlane = 135,
	BodyRobinHood = 115,
	BodyWarWagonLine = 828,
	BodyPlumedArcherLine = 764,
	BodyNobunaga = 151,
	BodyChuKoNuLine = 28,
	WreckageGodsownSlingUnpacked = 194,
	WreckageGodsownSlingPacked = 735,
	BodyShah = 435,
	BodyWilliamWallace = 433,
	BodySaythanWildWoman = 431,
	BodyJoanofArc = 630,
	BodyFurioustheMonkeyBoy = 861,
	BodyArchersoftheEyes = 687,
	BodyWilliamtheConqueror = 633,
	BodyWildHorse = 815,
	BodyDeer = 43,
	BodyIronBoar = 356,
	BodyRabidWolf = 237,
	BodyJaguar = 813,
	BodySheep = 595,
	BodyTurkey = 834,
	RoughFarm = 357,
	BatteredFishTrap = 278,
	Macaw = 816,
	Hawk = 96,
	StormyDog = 862,
	Flare = 27
};

struct Vector4
{
	float x;
	float y;
	float z;
	float w;

	Vector4(float x, float y, float z, float w)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}
};

struct Vector3
{
	float x;
	float y;
	float z;

	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

struct Vector2
{
	float x;
	float y;

	Vector2()
	{
		x = 0;
		y = 0;
	}

	Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

};


// Created with ReClass.NET 1.2 by KN4CK3R


class Main
{
public:
	class GameData *GameData; //0x0000
}; //Size: 0x0004


class GameData
{
public:
	char pad_0000[104]; //0x0000
	int32_t gameTime; //0x0068
	char pad_006C[24]; //0x006C
	class Map *pMap; //0x0084
	char pad_0088[80]; //0x0088
	Vector3 unkCam; //0x00D8
	float speedMaybe; //0x00E4
	char pad_00E8[156]; //0x00E8
	class PlayerArray *pPlayerArray; //0x0184
}; //Size: 0x0188

class PlayerData
{
public:
	class Player *player; //0x0000
	int32_t unk; //0x0004
}; //Size: 0x0008

class PlayerArray
{
public:
	char pad_0000[8]; //0x0000
	class PlayerData playerData[8]; //0x0008
	char pad_0048[44]; //0x0048
}; //Size: 0x0074

class VictoryConditions
{
public:
	char pad_0000[28]; //0x0000
	int32_t Points; //0x001C
	char pad_0020[52]; //0x0020
}; //Size: 0x0054


class PriceTablePtr
{
public:
	char pad_0000[64]; //0x0000
}; //Size: 0x0040

class BaseGameScreen
{
public:
	class GameScreen *gameScreenPtr; //0x0000
	char pad_0004[1332]; //0x0004
}; //Size: 0x0538

class GameScreen
{
public:
	char pad_0000[44]; //0x0000
	int32_t posMouseX; //0x002C
	int32_t posMouseY; //0x0030
	char pad_0034[68]; //0x0034
	int32_t ScreenResX1; //0x0078
	int32_t ScreenResX2; //0x007C
	int32_t ScreenResY1; //0x0080
	int32_t ScreenResY2; //0x0084
	char pad_0088[56]; //0x0088
	int32_t ScreenResX3; //0x00C0
	int32_t ScreenResY3; //0x00C4
	char pad_00C8[48]; //0x00C8
	class MainView *mainViewPtr; //0x00F8
	char pad_00FC[384]; //0x00FC
}; //Size: 0x027C

class MainView
{
public:
	char pad_0000[420]; //0x0000
	Vector3 PosScreen; //0x01A4
	char pad_01B0[92]; //0x01B0
}; //Size: 0x020C

class Map
{
public:
	char pad_0000[8]; //0x0000
	int32_t SizeX; //0x0008
	int32_t SizeY; //0x000C
	char pad_0010[244]; //0x0010
}; //Size: 0x0104

class PriceTable
{
public:
	char pad_0000[64]; //0x0000
}; //Size: 0x0040

class PlayerName
{
public:
	char pad_0000[68]; //0x0000
}; //Size: 0x0044

class RallyPoint
{
public:
	Vector3 RallyPos; //0x0000
}; //Size: 0x000C

class RallyArray
{
public:
	class RallyPoint N00000E19[8]; //0x0000
}; //Size: 0x0060

class N00000E17
{
public:
	char pad_0000[4]; //0x0000
}; //Size: 0x0004

class N00000E61
{
public:
	char pad_0000[4]; //0x0000
}; //Size: 0x0004

class N00000ECA
{
public:
	char pad_0000[4]; //0x0000
}; //Size: 0x0004

class TargetPtr
{
public:
	char pad_0000[8]; //0x0000
	class Target *pTarget; //0x0008
}; //Size: 0x000C

class Target
{
public:
	class TargetData *pTargetData; //0x0000
}; //Size: 0x0004

class TargetData
{
public:
	char pad_0000[8]; //0x0000
	class Unit *pUnit; //0x0008
	char pad_000C[4]; //0x000C
	class Unit *pTargetUnit; //0x0010
	char pad_0014[4]; //0x0014
	int32_t TargetId; //0x0018
	char pad_001C[4]; //0x001C
	Vector2 Destination; //0x0020
	char pad_0028[28]; //0x0028
}; //Size: 0x0044

class N0000110E
{
public:
	char pad_0000[4]; //0x0000
}; //Size: 0x0004

class N00001156
{
public:
	char pad_0000[4]; //0x0000
}; //Size: 0x0004

class Color
{
public:
	char pad_0000[8]; //0x0000
	int32_t playerColor; //0x0008
}; //Size: 0x000C

class Civilization
{
public:
	char pad_0000[4]; //0x0000
	char civName[8]; //0x0004
}; //Size: 0x000C