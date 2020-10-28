#include"fun.h"
void again() {
	mciSendString("close background2.mp3", NULL, 0, NULL);
	mciSendString("open background1.mp3 ", NULL, 0, NULL);
	mciSendString("play background1.mp3", NULL, 0, NULL);

	 x0 = 0, y0 = 600, x1 = 1150, y1 = 600, count1 = 0, count2, re = 0, index = 0, over = 1, mytime, mo = 0, mu, be = 0, number = 0, grade1 = 0, grade2 = 0, wa = 0, hu = 0, get1 = 0, get2 = 0,mytell=0;
	 Hit[3] = { 0 };
	 strcpy(best,"");

}

//更新数据，重新开始游戏