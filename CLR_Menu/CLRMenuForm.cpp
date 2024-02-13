#include "CLRMenuForm.h"

#include <Windows.h>
using namespace CLRMenu;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	CLRMenu::Application::Run(gcnew CLRMenu::CLRMenuForm);
}