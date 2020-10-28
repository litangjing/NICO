#include"fun.h"
void drop2() {
	re = item[index++];
	if (index == 11)
		index = 0;
	int x = rand() / 26, y = 0;

	//由随机数确定掉落位置

	do {
		move2();
		print1();

		//移动和即时打印分数

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
		
		//接到鱼和蘑菇加分

		move2();
		if (x > x0 - 50 && x < x0 + 150 && y >= 550 && re == 0) {
			putimage(x, y, 50, 50, &background, x, y);
			count1 -= 1;
			grade1 -= 400;
			x = rand() / 26, y = 0;
			re = item[index++];
			if (index == 11)
				index = 0;
			continue;
		}
		//接到刺猬减分

		else {
			putimage(x, y, 50, 50, &background, x, y);

			y += 5;
			move2();
			if (re == 0) {
				putimage(x, y, &black2, SRCAND);
				putimage(x, y, &hedgehog, SRCPAINT);
			}
			if (re == 1) {
				putimage(x, y, &black3, SRCAND);
				putimage(x, y, &mushroom, SRCPAINT);
			}
			if (re == 2) {
				putimage(x, y, &black4, SRCAND);
				putimage(x, y, &fish, SRCPAINT);
			}
			if (y >= 700) {
				if (re == 1 || re == 2) {
					count1 -= 1;
					grade1 -= 400;
					get1 += 1;
				}
				putimage(x, y, 50, 50, &background, x, y);
				re = item[index++];
				if (index == 11)
					index = 0;
				continue;
			}

			//物品掉落
			if (y % 10 == 0)
				Sleep(mytime);
		}
	} while (y < 700);
	putimage(x, y, 50, 50, &background, x, y);

}
