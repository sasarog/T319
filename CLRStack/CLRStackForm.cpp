#include "CLRStackForm.h"


#include <Windows.h>

using namespace CLRStack;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew CLRStackForm);
}