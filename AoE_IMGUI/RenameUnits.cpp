#include "RenameUnits.h"

#include "Utility.h"
#include "Renderer.h"

#include <string>



void Rename(char* addressOfLabel, char* newName)
{
	std::string sNewName = std::string(newName);
	memcpy(addressOfLabel, newName, sNewName.size() + 1); //+1 for null byte
}

void RenameUnits::OnInitialise()
{
	lumberjack = Utility::ScanProc("\x4C\x75\x6D\x62\x65\x72\x6A\x61\x63\x6B\x0", "xxxxxxxxxxx");
	forager = Utility::ScanProc("\x46\x6F\x72\x61\x67\x65\x72\x0", "xxxxxxxx");
	goldminer = Utility::ScanProc("\x47\x6F\x6C\x64\x20\x4D\x69\x6E\x65\x72\x0", "xxxxxxxxxxx");
	stoneminer = Utility::ScanProc("\x53\x74\x6F\x6E\x65\x20\x4D\x69\x6E\x65\x72\x0", "xxxxxxxxxxxx");
	farmer = Utility::ScanProc("\x46\x61\x72\x6D\x65\x72\x0", "xxxxxxx");
	shepherd = Utility::ScanProc("\x53\x68\x65\x70\x68\x65\x72\x64\x0", "xxxxxxxxx");
	hunter = Utility::ScanProc("\x48\x75\x6E\x74\x65\x72\x0", "xxxxxxx");
	fisherman = Utility::ScanProc("\x46\x69\x73\x68\x65\x72\x6D\x61\x6E\x0", "xxxxxxxxxx");

	Rename(lumberjack, "timb3r");
}

void RenameUnits::OnMenuMainWindow()
{
	if (ImGui::TreeNode("Rename Villagers"))
	{
		ImGui::PushItemWidth(100);
		ImGui::InputText("Lumberjack", lumberjack, 10);
		ImGui::InputText("Forager", forager, 7);
		ImGui::InputText("Gold Miner", goldminer, 10);
		ImGui::InputText("Stone Miner", stoneminer, 11);
		ImGui::InputText("Farmer", farmer, 6);
		ImGui::InputText("Shepherd", shepherd, 8);
		ImGui::InputText("Hunter", hunter, 6);
		ImGui::InputText("Fisherman", fisherman, 9);
		ImGui::TreePop();
	}
}

void RenameUnits::OnShutdown()
{
	Rename(lumberjack, "Lumberjack");
	Rename(forager, "Forager");
	Rename(goldminer, "Gold Miner");
	Rename(stoneminer, "Stone Miner");
	Rename(farmer, "Farmer");
	Rename(shepherd, "Shepherd");
	Rename(hunter, "Hunter");
	Rename(fisherman, "Fisherman");
}