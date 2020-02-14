#pragma once
#include <cstdint>

class ObjectManager
{
public:
	char pad_0000[4]; //0x0000
	Unit** units; //0x0004
	int32_t iObjectCount; //0x0008
};
