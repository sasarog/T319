#include "CLRMatrixForm.h"

#include  <Windows.h>
using namespace CLRMatrix;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CLRMatrixForm());
	return 0;
}
