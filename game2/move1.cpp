#include"fun.h"
void move1 () {
	mytime = 20;
	if (_kbhit()) {
		char c = _getch();
		switch (c)
		{
		case 'a':
		case 'A':
		case 75:
			putimage(x0, y0, 150, 150, &background, x0, y0);
			x0 -= 40;
			if (x0 < 0)
				x0 = 0;
			if (x0 > 1150)
				x0 = 1150;
			putimage(x0, y0, &black1, SRCAND);
			putimage(x0, y0, &cat1, SRCPAINT);
			break;
		case 'd':
		case 'D':
		case 77:
			putimage(x0, y0, 150, 150, &background, x0, y0);
			x0 += 40;
			if (x0 < 0)
				x0 = 0;
			if (x0 > 1150)
				x0 = 1150;
			putimage(x0, y0, &black1, SRCAND);
			putimage(x0, y0, &cat1, SRCPAINT);
			break;
		}
	}
	
}
 //µ•»Àº¸≈Ã“∆∂Ø
