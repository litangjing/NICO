#include"fun.h"
void drop3() {
	re = item[index++];
	if (index == 11)
		index = 0;
	int x = rand() / 26, y = 0;

	do {
		move3();
		print2();

		if (x > x0 - 50 && x < x0 + 150 && y >= 550 && (re == 1 || re == 2)) {
			putimage(x, y, 50, 50, &background, x, y);
			count1 += 1;
			grade1 += 300;
			get1 = 0;
			x = rand() / 26, y = 0;
			re = item[index++];
			if (index == 11)
				index = 0;
			continue;
		}
		//玩家一接到鱼和蘑菇加分
		move3();
	

		if (x > x1 - 50 && x < x1 + 150 && y >= 550 && (re == 1 || re == 2)) {
			putimage(x, y, 50, 50, &background, x, y);
			count2 += 1;
			grade2 += 300;
			get2 = 0;
			x = rand() / 26, y = 0;
			re = item[index++];
			if (index == 11)
				index = 0;
			continue;
		}
		//玩家二接到鱼和蘑菇加分
		move3();
		

		if (x > x0 - 50 && x < x0 + 150 && y >= 550 && re == 0) {
			putimage(x, y, 50, 50, &background, x, y);
			count1 -= 1;
			grade1 -= 350;
			x = rand() / 26, y = 0;
			re = item[index++];
			if (index == 11)
				index = 0;
			continue;
		}

		move3();
		
		//玩家一接到刺猬减分

		if (x > x1 - 50 && x < x1 + 150 && y >= 550 && re == 0) {
			putimage(x, y, 50, 50, &background, x, y);
			count2 -= 1;
			grade2 -= 350;
			x = rand() / 26, y = 0;
			re = item[index++];
			if (index == 11)
				index = 0;
			continue;
		}

		//玩家二接到刺猬减分

		move3();
		
			putimage(x, y, 50, 50, &background, x, y);

			y += 5;

			move3();
			print2();

			if (re == 0) {
				putimage(x, y, &black2, SRCAND);
				putimage(x, y, &hedgehog, SRCPAINT);
			}

			move3();
	

			if (re == 1) {
				putimage(x, y, &black3, SRCAND);
				putimage(x, y, &mushroom, SRCPAINT);
			}

			move3();
		
			if (re == 2) {
				putimage(x, y, &black4, SRCAND);
				putimage(x, y, &fish, SRCPAINT);
			}

			move3();
			

			if (y >= 700) {
				if (re == 1 || re == 2) {
					count1 -= 1;
					grade1 -= 220;
					get1 += 1;
					count2 -= 1;
					grade2 -= 350;
					get2 += 1;
				}
				putimage(x, y, 50, 50, &background, x, y);
				re = item[index++];
				if (index == 11)
					index = 0;
				continue;
			}

			move3();

			//物品掉落

			Sleep(mytime);
		
	} while (y < 700);
	putimage(x, y, 50, 50, &background, x, y);
}