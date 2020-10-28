#include"fun.h"
void move2() {
	mytime = 7;

	MOUSEMSG my;

	if (MouseHit()) {
		my = GetMouseMsg();
		if (my.uMsg == WM_MOUSEMOVE) {
			putimage(x0, y0, 150, 150, &background, x0, y0);
			x0 = my.x;
			if (x0 < 0)
				x0 = 0;
			if (x0 > 1150)
				x0 = 1150;
			putimage(x0, y0, &black1, SRCAND);
			putimage(x0, y0, &cat1, SRCPAINT);

		}
	}
}

//单人鼠标移动