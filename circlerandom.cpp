#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h> //to use rand
#include<dos.h> //to use delay
void main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\tc\\bgi");
while(!kbhit())
	{
	setcolor(rand()%10);
	circle(rand()%700, rand()%400, rand()%50);
	delay(20);
	}
getch();
closegraph();
}
