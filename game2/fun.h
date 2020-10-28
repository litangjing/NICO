#include<stdio.h>
#include <graphics.h>      
#include <conio.h>
#include<time.h>
#include<string.h>
#pragma comment(lib,"Winmm.lib")


extern int x0, y0, x1, y1, count1, count2, re, index, over, mytime, mo, mu, be, number, grade1, grade2, wa, hu, get1, get2,mytell;
extern int Hit[3] ;
extern MOUSEMSG my;
extern IMAGE background, cat1, cat2, mushroom, hedgehog, fish, black1, black2, black3, black4, begin, win, win1, win2, lose, ready, go, choose1, choose2, warning, conti,tell;
extern int item[];
extern char best[];

void load();
void game_begin();
void game_init1();
void game_init2();
void hit1();
void hit2();
void hit3();
void hit4();
void print1();
void print2();
void move1();
void move2();
void move3();
void counter1();
void counter2();
void warning1();
void warning2();
void drop1();
void drop2();
void drop3();
void bestgrade1();
void bestgrade2();
void again();

