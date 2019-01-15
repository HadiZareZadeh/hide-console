#include <iostream>
#include <Windows.h>

using namespace std;


void hide(){

	HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);


}

void main(){

	hide();
	int a;
	cin >> a;
}