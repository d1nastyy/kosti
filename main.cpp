#include "main.h"
#include <Windows.h>
using namespace kosti; // �������� ������ �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew main);
	return 0;
}
