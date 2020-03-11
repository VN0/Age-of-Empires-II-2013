#include "Unit.h"
#include "Player.h"
#include "Utility.h"

#include <Windows.h>


void Unit::Select(Player* player)
{
	typedef void(__thiscall * SelectUnit)(int32_t player, int32_t unit, int zeroOne);
	static SelectUnit selectUnit = (SelectUnit)(Utility::ScanProc("\x55\x8B\xEC\x56\x57\x8B\x7D\x08\x8B\xF1\x85\xFF\x0F\x84\x00\x00\x00\x00\xC7", "xxxxxxxxxxxxxx????x"));
	selectUnit((int32_t)player, (int32_t)this, 1);
}


void Unit::MoveTo(Vector2 pos, bool deselectAfterMove)
{
	typedef void(__thiscall * MoveUnit)(int32_t player, int32_t unit, float x, float y);
	static MoveUnit moveUnit = (MoveUnit)(Utility::ScanProc("\x55\x8B\xEC\x53\x56\x8B\x75\x08\x8B\xD9\x57\x85\xF6\x0F", "xxxxxxxxxxxxxx"));

	Select(this->pOwner);
	moveUnit((int32_t)this->pOwner, NULL, pos.x, pos.y);

	if (deselectAfterMove)
	{
		INPUT ip;
		// Set up a generic keyboard event.
		ip.type = INPUT_KEYBOARD;
		ip.ki.wScan = 0; // hardware scan code for key
		ip.ki.time = 0;
		ip.ki.dwExtraInfo = 0;

		// Press ESC
		ip.ki.wVk = VK_ESCAPE; // virtual-key code for the "6" key
		ip.ki.dwFlags = 0; // 0 for key press
		SendInput(1, &ip, sizeof(INPUT));

		// Release ESC
		ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
		SendInput(1, &ip, sizeof(INPUT));
	}
}

float Unit::GetDistance(Unit* other)
{
	Vector2 distanceVec = Vector2(this->vPosReadOnly.x - other->vPosReadOnly.x, this->vPosReadOnly.y - other->vPosReadOnly.y);
	return sqrt(distanceVec.x * distanceVec.x + distanceVec.y* distanceVec.y);
}

float Unit::GetDistance(Vector2 pos)
{
	Vector2 distanceVec = Vector2(this->vPosReadOnly.x - pos.x, this->vPosReadOnly.y - pos.y);
	return sqrt(distanceVec.x * distanceVec.x + distanceVec.y * distanceVec.y);
}

Vector2 Unit::GetDestination()
{
	bool canHaveDestination = this->mileage > 0 && this->fHealth > 0;
	if (canHaveDestination)
	{
		bool pointersNotNull = this->pTarget != nullptr && this->pTarget->pTarget != nullptr && this->pTarget->pTarget->pTargetData != nullptr;
		if (pointersNotNull)
		{
			return this->pTarget->pTarget->pTargetData->Destination;
		}
	}
	return Vector2(-1, -1);
}