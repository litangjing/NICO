#include "fun.h"
void print1() {
	setbkmode(TRANSPARENT);
	settextcolor(BGR(100, 100, 0));
	settextstyle(50, 30, _T("Ink Free"));

	putimage(10, 20, 450, 150, &background, 10, 20);

	TCHAR s1[] = _T("Target:");
	outtextxy(10, 20, s1);
	TCHAR s2[] = _T("Mycount:");
	outtextxy(10, 70, s2);
	TCHAR s3[] = _T("Mygrade:");
	outtextxy(10, 120, s3);
	char s4[5];
	_stprintf_s(s4, "%d", mu);
	outtextxy(250, 20, s4);
	char s5[5];
	_stprintf_s(s5, "%d", count1);
	outtextxy(250, 70, s5);
	char s6[10];
	_stprintf_s(s6, "%d", grade1);
	outtextxy(250, 120, s6);
}

//单人模式游戏状态打印