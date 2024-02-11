// 窗口最大化.c
#include <stdio.h>
#include <windows.h>

int main(void)
{
	HWND hConsole;
	hConsole=GetConsoleWindow();
	ShowWindow(hConsole, SW_MAXIMIZE);
}
