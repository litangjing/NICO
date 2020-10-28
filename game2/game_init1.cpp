#include"fun.h"
void game_init1() {
	mciSendString("close background1.mp3", NULL, 0, NULL);
	mciSendString("open background2.mp3 ", NULL, 0, NULL);
	mciSendString("play background2.mp3", NULL, 0, NULL);

	putimage(0, 0, &background);
	putimage(x0, y0, &black1, SRCAND);
	putimage(x0, y0, &cat1, SRCPAINT);

}

//单人游戏初始化
//播放音乐2