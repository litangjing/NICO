#include"fun.h"
void counter1() {
	if (mo == 1)
		mu = 12;
	else if (mo == 2)
		mu = 20;

	//����ģʽ�õ�ͨ������ĸ���

	if (count1 >= mu) {
		over = 0;
		putimage(0, 0, &win);
		if (mo == 2)
			bestgrade1();
		else
			bestgrade2();
		setbkmode(TRANSPARENT);
		settextcolor(BGR(100, 100, 0));
		settextstyle(80, 40, _T("Ink Free"));
		char s1[5];
		_stprintf_s(s1, "%d", grade1);
		outtextxy(620, 370, s1);
		outtextxy(620, 570, best);
	}

	//�ﵽ������Ϸͨ��

	if (count1 < -12 || get1 >= 6) {
		over = 0;
		putimage(0, 0, &lose);
		
	}

	//�����������޻������߸�û�нӵ���Ϸʧ��
}