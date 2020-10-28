#include"fun.h"
void counter1() {
	if (mo == 1)
		mu = 12;
	else if (mo == 2)
		mu = 20;

	//根据模式得到通关所需的个数

	if (count1 >= mu) {
		over = 0;
		putimage(0, 0, &win);
		if (mo == 2)
			bestgrade1();
		else
			bestgrade2();
		setbkmode(TRANSPARENT);
		settextcolor(BGR(100, 100, 0));
		settextstyle(80, 40, _T("Ink Free"));
		char s1[5];
		_stprintf_s(s1, "%d", grade1);
		outtextxy(620, 370, s1);
		outtextxy(620, 570, best);
	}

	//达到个数游戏通关

	if (count1 < -12 || get1 >= 6) {
		over = 0;
		putimage(0, 0, &lose);
		
	}

	//个数低于下限或连续七个没有接到游戏失败
}