#include "CLRQueueForm.h"
#include <Windows.h>
using namespace CLRQueueProject;

int WINAPI WinMain (HINSTANCE,HINSTANCE,LPSTR,int){
	Application::Run(gcnew CLRQueueForm());;
}
