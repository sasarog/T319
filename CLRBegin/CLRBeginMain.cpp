#include "CLRBeginMain.h"
#include <Windows.h>

using namespace 	 CLRBegin;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CLRBeginMain);
	return 0;
}


