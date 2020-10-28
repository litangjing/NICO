#include"fun.h"
void warning1() {
	int x = rand() / 26, y = 0;

	do {
		print1();
		if (mo == 1)
			move1();
		else
			move2();

		if (x > x0 - 50 && x < x0 + 150 && y >= 550) {
			putimage(x, y, 50, 50, &background, x, y);
			count1 -= 1;
			grade1 -= 400;
			x = rand() / 26, y = 0;
			continue;
		}
		else {
			putimage(x, y, 50, 50, &background, x, y);
			y += 5;
			putimage(x, y, &black2, SRCAND);
			putimage(x, y, &hedgehog, SRCPAINT);
		}
		if (y % 25 == 0)
			Sleep(1);
	} while (y < 700);
	putimage(x, y, 50, 50, &background, x, y);

}

//单人模式刺猬雨