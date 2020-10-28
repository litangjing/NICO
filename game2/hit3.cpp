#include"fun.h"
void hit3() {
	if (MouseHit) {
		my = GetMouseMsg();
		if (my.uMsg == WM_LBUTTONDOWN) {
			if (275 <= my.x&&my.x <= 585 && 270 <= my.y&&my.y <= 350) {
				Hit[0] = 4;
				Hit[1] = my.x;
				Hit[2] = my.y;
			}
			if (275 <= my.x&&my.x <= 585 && 450 <= my.y&&my.y <= 530) {
				Hit[0] = 5;
				Hit[1] = my.x;
				Hit[2] = my.y;
			}

		}
		if (my.uMsg == WM_LBUTTONUP) {
			if (Hit[0] == 4 && my.x == Hit[1] && my.y == Hit[2]) {
				number = 1;
			}
			if (Hit[0] == 5 && my.x == Hit[1] && my.y == Hit[2]) {
				number = 2;
			}
			Hit[0] = 0;
		}

	}
}

//键盘操作可选择人数