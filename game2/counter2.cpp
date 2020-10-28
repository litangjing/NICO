#include"fun.h"
void counter2() {
	if (mo == 1)
		mu = 12;
	else if (mo == 2)
		mu = 20;

	//根据模式得到通关所需的个数

	setbkmode(TRANSPARENT);
	settextcolor(BGR(100, 100, 0));

	if (count1 >= mu || count2 < -12 || get2 >= 4) {
		over = 0;
		putimage(0, 0, &win1);
		
		settextstyle(100, 50, _T("Ink Free"));
		char s1[10];
		_stprintf_s(s1, "%d", grade1);
		outtextxy(600, 340, s1);
		settextstyle(50, 25, _T("Ink Free"));
		char s2[10];
		_stprintf_s(s2, "%d", grade2);
		outtextxy(650, 570, s2);
		
	}

	//玩家一达到个数玩家一获胜
	//玩家二低于下限或连续5个没有接到玩家一获胜

	if (count2 >= mu || count1 < -12 || get1 >= 4) {
		
		
		over = 0;
		putimage(0, 0, &win2);
		
		settextstyle(100, 50, _T("Ink Free"));
		char s1[10];
		_stprintf_s(s1, "%d", grade2);
		outtextxy(600, 340, s1);
		settextstyle(50, 25, _T("Ink Free"));
		char s2[10];
		_stprintf_s(s2, "%d", grade1);
		outtextxy(650, 570, s2);
	}

	//玩家二达到个数玩家二获胜
	//玩家一低于下限或连续5个没有接到玩家二获胜
}
