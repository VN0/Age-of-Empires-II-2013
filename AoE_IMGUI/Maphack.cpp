#include "Maphack.h"

#include "Renderer.h"
#include "Utility.h"

#include <Windows.h>

void Maphack::OnMenuMainWindow()
{
	if (ImGui::Button("Maphack"))
	{
		static tMaphack oMaphack = (tMaphack)(Utility::ScanProc("\x56\xE8\x00\x00\x00\x00\x8B\xF0\x6A", "xx????xxx"));
		oMaphack();
	}
}
