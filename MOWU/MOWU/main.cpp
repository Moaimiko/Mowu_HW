#include<graphics.h>
#include<conio.h>
#include"Mowu_time.h"

class Self
{
private:
	int x, y;
public:
	Self() {};
	void Drawself()
	{
		setfillcolor(WHITE);
		fillcircle(450, 450, 10);
		x = 450;
		y = 450;
	}
	void Moveself()
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(x, y, 10);
		if (GetAsyncKeyState(VK_LEFT) & 0x8000) x = x - 3;
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)x = x + 3;
		if (GetAsyncKeyState(VK_UP) & 0x8000)y = y - 3;
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)	y = y + 3;
		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillcircle(x, y, 10);
		Sleep(10);
	}
	int ValueofX()
	{
		return x;
	}
	int ValueofY()
	{
		return y;
	}
}me;


class Enemy
{
private:
	int Ex1, Ey1, Ex2, Ey2;
public:
	Enemy() {}
	void Drawenemy()
	{
		setfillcolor(WHITE);
		fillcircle(100, 100, 30);
		fillcircle(800, 100, 30);
		Ex1 = Ey1 = 100;
		Ex2 = 800; Ey2 = 100;
	}
	void Moveenemy()
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(Ex1, Ey1, 30);
		fillcircle(Ex2, Ey2, 30);
		if (me.ValueofX() > Ex1)
			Ex1++;
		else if (me.ValueofX() < Ex1)
			Ex1--;
		if (me.ValueofY()> Ey1)
			Ey1++;
		else if (me.ValueofY() < Ey1)
			Ey1--;
		if (me.ValueofX() > Ex2)
			Ex2++;
		else if (me.ValueofX() < Ex2)
			Ex2--;
		if (me.ValueofY() > Ey2)
			Ey2++;
		else if (me.ValueofY() < Ey2)
			Ey2--;
		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillcircle(Ex1, Ey1, 30);
		fillcircle(Ex2, Ey2, 30);
	}
}enemy;
void UI()
{
	initgraph(900, 900);
};
void move()
{
	me.Drawself();
	enemy.Drawenemy();
	while (true)
	{
		BeginBatchDraw();
		me.Moveself();
		enemy.Moveenemy();
		FlushBatchDraw();
	}
}
void main()
{
	UI();
	move();
}