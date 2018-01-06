//Mowu_self.h
#ifndef GRAPHICS_H
#include<graphics.h>
#endif // !GRAPHICS_H


class Self
{
private:
	int x, y, speed;
	IMAGE selfimage[3];
	IMAGE State;
	int w, h;
public:
	Self()
	{
		loadimage(&selfimage[0], _T(".\\Reimu\\left.jpg"));
		loadimage(&selfimage[2], _T(".\\Reimu\\right.jpg"));
		loadimage(&selfimage[1], _T(".\\Reimu\\stop.jpg"));
		w = selfimage[1].getwidth();
		h = selfimage[1].getheight();
	};
	void Drawself()
	{
		setfillcolor(WHITE);
		putimage(450, 450, &selfimage[1]);
		x = 450;
		y = 450;
		speed = 5;
	}
	void Moveself()
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillrectangle(x, y, (x + w), (y + h));
		State = selfimage[1];
		if (GetAsyncKeyState(VK_SHIFT) & 0x8000) speed = 2; else speed = 5;
		if (GetAsyncKeyState(VK_LEFT) & 0x8000) { x = x - speed; State = selfimage[0]; }
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { x = x + speed; State = selfimage[2]; }
		if (GetAsyncKeyState(VK_UP) & 0x8000)y = y - speed;
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)	y = y + speed;
		putimage(x, y, &State);
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
	int SelfpointX()
	{
		return (x + w / 2);
	}
	int SelfpointY()
	{
		return(y + h / 2);
	}
};
