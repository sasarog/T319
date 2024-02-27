#include "PaintingForm.h"

#include "Windows.h"

using namespace PaintingProject;

int WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew PaintingForm());
}