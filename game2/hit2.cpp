#include"fun.h"
void hit2() {
	if (MouseHit) {
		my = GetMouseMsg();
		if (my.uMsg == WM_LBUTTONDOWN) {
			if (275 <= my.x&&my.x <= 585 && 277 <= my.y&&my.y <= 350) {
				Hit[0] = 2;
				Hit[1] = my.x;
				Hit[2] = my.y;
			}
			if (275 <= my.x&&my.x <= 585 && 450 <= my.y&&my.y <= 530) {
				Hit[0] = 3;
				Hit[1] = my.x;
				Hit[2] = my.y;
			}

		}
		if (my.uMsg == WM_LBUTTONUP) {
			if (Hit[0] == 2 && my.x == Hit[1] && my.y == Hit[2]) {
				be = 2;
				mo = 2;
			}
			if (Hit[0] == 3 && my.x == Hit[1] && my.y == Hit[2]) {
				be = 2;
				mo = 1;
			}
			Hit[0] = 0;
		}

	}
}

//选择操作方式