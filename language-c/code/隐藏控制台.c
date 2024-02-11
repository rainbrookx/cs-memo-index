#include <windows.h>

int main()
{
	HWND hwnd;
	hwnd = FindWindow("ConsoleWindowClass", NULL);
	if (hwnd)
	{
		ShowWindow(hwnd, SW_HIDE);
	}
	MessageBox(NULL, "The Console has been hidden!","HiddingSuccess",
	MB_ICONINFORMATION);
	return 0;
}
