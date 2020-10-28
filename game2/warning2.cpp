#include"fun.h"
void warning2() {
	int x = rand() / 26, y = 0;

	do {
		print2();
		move3();
		if (x > x0 - 50 && x < x0 + 150 && y >= 550) {
			putimage(x, y, 50, 50, &background, x, y);
			count1 -= 1;
			grade1 -= 400;
			x = rand() / 26, y = 0;
			continue;
		}
		if (x > x1 - 50 && x < x1 + 150 && y >= 550) {
			putimage(x, y, 50, 50, &background, x, y);
			count2 -= 1;
			grade2 -= 400;
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

//Ë«ÈËÄ£Ê½´Ìâ¬Óê
