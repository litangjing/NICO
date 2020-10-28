#include "fun.h"
void print2() {
	setbkmode(TRANSPARENT);
	settextcolor(BGR(100, 100, 0));
	settextstyle(30, 20, _T("Ink Free"));

	putimage(10, 20, 600, 300, &background, 10, 20);

	TCHAR s1[] = _T("Target:");
	outtextxy(10, 20, s1);
	TCHAR s2[] = _T("Player1's count:");
	outtextxy(10, 70, s2);
	TCHAR s3[] = _T("Player2's count:");
	outtextxy(10, 120, s3);
	TCHAR s4[] = _T("Player1's grade:");
	outtextxy(10, 170, s4);
	TCHAR s5[] = _T("Player2's grade:");
	outtextxy(10, 220, s5);
	char s6[5];
	_stprintf_s(s6, "%d", mu);
	outtextxy(150, 20, s6);
	char s7[5];
	_stprintf_s(s7, "%d", count1);
	outtextxy(300, 70, s7);
	char s8[5];
	_stprintf_s(s8, "%d", count2);
	outtextxy(300, 120, s8);
	char s9[10];
	_stprintf_s(s9, "%d", grade1);
	outtextxy(300, 170, s9);
	char s10[10];
	_stprintf_s(s10, "%d", grade2);
	outtextxy(300, 220, s10);
}

//双人模式游戏状态打印