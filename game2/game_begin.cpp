#include"fun.h"

void game_begin() {
	initgraph(1300, 750);
	putimage(0, 0, &begin);
	mciSendString("open background1.mp3", NULL, 0, NULL);
	mciSendString("play background1.mp3 repeat", NULL, 0, NULL);
}

//��ʼ����ʼ����
//��������1