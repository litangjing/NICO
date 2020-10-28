#include"fun.h"
int main() {
	 load();
LOOP:again();
	game_begin();
	do {
		hit1();
	} while (be == 0);
	putimage(0, 0, &choose1);
	do {
		hit3();
	} while (number == 0);
	if (number == 1) {
		putimage(0, 0, &choose2);
		do {
			hit2();
		} while (be == 1);
	}
	else {
		be = 2;
		mo = 1;
	}
	putimage(0, 0, &tell);
	do {
		hit4();
	} while (mytell == 0);
	if (be == 2) {
		srand((unsigned)time(NULL));

		if (number == 1&&mo==1) {
			putimage(0, 0, &ready);
			Sleep(1000);
			putimage(0, 0, &go);
			Sleep(1000);
			game_init1();
			int i=0;
			do {
				if (count1 >= 8 && wa == 0) {
					wa = 1;
					putimage(0, 0, &warning);
					Sleep(1400);
					game_init1();
					do {
						warning1();
						i++;
						Sleep(50);
					} while (i < 40);
					putimage(0, 0, &conti);
					Sleep(1000);
					game_init1();
				}
				drop1();
				counter1();
			} while (over);
		}
		else if (number == 1 && mo == 2) {
			putimage(0, 0, &ready);
			Sleep(1000);
			putimage(0, 0, &go);
			Sleep(1000);
			game_init1();
			int i = 0;
			do {
				if (count1 >= 6 && wa == 0) {
					wa = 1;
					putimage(0, 0, &warning);
					Sleep(1400);
					game_init1();
					do {
						warning1();
						i++;
						Sleep(50);
					} while (i < 50);
					putimage(0, 0, &conti);
					Sleep(1000);
					game_init1();
				}
				drop2();
				counter1();
			} while (over);
		}
		else {
			putimage(0, 0, &ready);
			putimage(x1, y1, &black1, SRCAND);
			putimage(x1, y1, &cat2, SRCPAINT);
			Sleep(1000);
			putimage(0, 0, &go);
			putimage(x1, y1, &black1, SRCAND);
			putimage(x1, y1, &cat2, SRCPAINT);
			Sleep(1000);
			game_init2();
			int i=0;
			do {
				if ((count1 >= 8 || count2 >= 8) && wa == 0) {
					wa = 1;
					putimage(0,0,&warning);
					Sleep(1400);		
					game_init2();
					do{
						warning2();
						i++;
						Sleep(50);
					} while (i < 40);
					putimage(0, 0, &conti);
					Sleep(1000);
					game_init2();
				}
				drop3();
				counter2();
			} while (over);
		}
		while (true) {
			char b=_getch();
			if (b = 13)
				goto LOOP;
		}
	}
	return 0;
}