#include"fun.h"
void hit4() {
	if (MouseHit) {
		my = GetMouseMsg();
		if (my.uMsg == WM_LBUTTONDOWN) {
			if (450 <= my.x&&my.x <= 675 && 550 <= my.y&&my.y <= 630) {
				Hit[0] = 1;
				Hit[1] = my.x;
				Hit[2] = my.y;
			}
		}
		if (my.uMsg == WM_LBUTTONUP) {
			if (Hit[0] == 1 && my.x == Hit[1] && my.y == Hit[2]) {
				mytell = 1;
			}
			Hit[0] = 0;
		}

	}
}

//点击"确定"开始游戏