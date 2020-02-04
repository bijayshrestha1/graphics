#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	int i;
	int r1x1=60,r1y1=250;
	int r1x2=90,r1y2=290;
	int r2x1=10,r2y1=290;
	int r2x2=250,r2y2=360;
	int c1x=50,c1y=360;
	int c2x=210,c2y=360;
	int tx=70,ty=300;

	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setbkcolor(RED);
	setbkcolor(GREEN);
	for(i=1;i<500;i=i+5)
	{
	rectangle(r1x1+i,r1y1,r1x2+i,r1y2);
	rectangle(r2x1+i,r2y1,r2x2+i,r2y2);
	circle(c1x+i,c1y,30);
	circle(c2x+i,c2y,30);
	setcolor(BLUE);
	outtextxy(tx+i,ty,"mundre_yatayat");
	delay(100);
	clearviewport();
	}
	getch();
	closegraph();
	}
