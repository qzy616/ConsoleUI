#pragma once
#include "ConsoleGraphicsBase.h"
#define UP 1
#define DN 2
#define MID 3
struct mode {
	int m;
};
void MenuBar(mode m,char* text,char event[15]);

void MenuBar(mode m, char* text, char event[15]) {
	Pos(0, 0);
	for (int i = 1; i <= 80; i++) {
		cout << " ";
	}
	Pos(0, 0);
	cout << text;
	return;
}