#include "RenameUnits.h"

#include "Utility.h"
#include "Renderer.h"

#include <string>



void Rename(char* addressOfLabel, char* newName)
{
	std::string sNewName = std::string(newName);
	memcpy(addressOfLabel, newName, sNewName.size() + 2); //+2 for null bytes
}

void RenameUnits::OnInitialise()
{
	lumberjack = Utility::ScanProc("\x4C\x75\x6D\x62\x65\x72\x6A\x61\x63\x6B", "xxxxxxxxxx");
	Rename(lumberjack, "timb3r");
}

void RenameUnits::OnMenuMainWindow()
{
	/*static char* lumberjackBuffer = new char[8];
	ImGui::InputText("Lumberjack", lumberjackBuffer, 8);
	if (ImGui::Button("Rename"))
	{
		Rename(lumberjack, std::string(lumberjackBuffer));
	}*/
}