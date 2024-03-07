#include "AnimeForm.h"

#include <Windows.h>

using namespace AnimeVideoProject;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew AnimeForm());
}