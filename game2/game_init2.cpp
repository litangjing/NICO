#include"fun.h"
void game_init2() {
	mciSendString("close background1.mp3", NULL, 0, NULL);
	mciSendString("open background2.mp3 ", NULL, 0, NULL);
	mciSendString("play background2.mp3", NULL, 0, NULL);

	putimage(0, 0, &background);
	putimage(x0, y0, &black1, SRCAND);
	putimage(x0, y0, &cat1, SRCPAINT);
	putimage(x1, y1, &black1, SRCAND);
	putimage(x1, y1, &cat2, SRCPAINT);
}

//双人游戏初始化
//播放音乐2