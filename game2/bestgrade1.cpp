#include"fun.h"
void bestgrade1() {
	FILE *file = fopen("grade1.txt", "a");
	fprintf(file, "%d\n", grade1);
	fclose(file);
	file = fopen("grade1.txt", "r");
	char b[10];
	while (!feof(file)) {
		fgets(b, 20, file);
		if (strcmp(best, b) < 0) {
			strcpy(best, b);
		}
	}
	fclose(file);
}

//д�뱾�γɼ�
//�����ĵ�Ѱ����߳ɼ�����¼