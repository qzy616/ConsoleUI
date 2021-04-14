#pragma once
#include "ConsoleGraphicsBase.h"
using namespace std;
void Box(int lx, int ly, int rx, int ry);

void Box(int lx, int ly, int rx, int ry) {
	Pos(lx, ly);
	for (int i = ly; i <= ry; i++) {
		for (int j = lx; j <= rx; j++) {
			Pos(j, i);
			cout << " ";
		}
	}
}

