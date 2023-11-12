#include<stdio.h>
#include<windows.h>

int main(void)
{
	HWND hwnd;

	hwnd = FindWindow(L"Chrome_RenderWidgetHostHWND", L"Chrome Legacy Window");


	return 0;
}