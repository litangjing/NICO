#include"fun.h"
void move3() {
	print2();
	mytime = 8;
	if (_kbhit()) {
		putimage(x0, y0, &black1, SRCAND);
		putimage(x0, y0, &cat1, SRCPAINT);
		putimage(x1, y1, &black1, SRCAND);
		putimage(x1, y1, &cat2, SRCPAINT);
		char c = _getch();
		switch (c)
		{
		case 'a':
		case 'A':
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
			putimage(x0, y0, 150, 150, &background, x0, y0);
			x0 += 40;
			if (x0 < 0)
				x0 = 0;
			if (x0 > 1150)
				x0 = 1150;
			putimage(x0, y0, &black1, SRCAND);
			putimage(x0, y0, &cat1, SRCPAINT);
			break;
		case 75:
			putimage(x1, y1, 150, 150, &background, x1, y1);
			x1 -= 40;
			if (x1 < 0)
				x1 = 0;
			if (x1 > 1150)
				x1 = 1150;
			putimage(x1, y1, &black1, SRCAND);
			putimage(x1, y1, &cat2, SRCPAINT);
			break;
		case 77:
			putimage(x1, y1, 150, 150, &background, x1, y1);
			x1 += 40;
			if (x1 < 0)
				x1 = 0;
			if (x1 > 1150)
				x1 = 1150;
			putimage(x1, y1, &black1, SRCAND);
			putimage(x1, y1, &cat2, SRCPAINT);
			break;
		}
	}
}

//Ë«ÈË¼üÅÌÒÆ¶¯