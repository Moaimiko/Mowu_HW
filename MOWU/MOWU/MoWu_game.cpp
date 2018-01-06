#include"Mowu_datasheet.h"
#ifndef GRAPHICS_H
#include<graphics.h>
#endif // !GRAPHICS_H
#ifndef CONIO_H
#include<conio.h>
#endif // !CONIO_H
#include"Mowu_time.h"
#include"Mowu_trail.h"
#include"Mowu_bullet.h"


int main()
{
	initgraph(SCREEN_WIDTH, SCREEN_LENGTH);	//初始化UI界面
	Bullet a0(320, 240, 5, 0, trail_sin, WHITE);
	Bullet a1(320, 240, 5, 3.14159 / 2, trail_sin, WHITE);
	Bullet a2(320, 240, 5, 3.14159, trail_sin, WHITE);
	Bullet a3(320, 240, 5, 3.14159 * 1.5, trail_sin, WHITE);
	Bullet a[21],b[21],c[21],d[21],e[21],f[21];
	for (int i = 0; i < 21; i++)
	{
		a[i].initialization(320, 240, 5, i / 20.0 * 2 * Pi, trail_sin, WHITE);
		b[i].initialization(320, 240, 5, i / 20.0 * 2 * Pi, trail_line, YELLOW);
		c[i].initialization(160, 120, 5, i / 20.0 * 2 * Pi, trail_sin, BLUE);
		d[i].initialization(480, 120, 5, i / 20.0 * 2 * Pi, trail_sin, GREEN);
		e[i].initialization(320, 120, 5, i / 20.0 * 2 * Pi, trail_circle_0, RED);
		f[i].initialization(320, 120, 5, i / 20.0 * 2 * Pi, trail_circle_1, WHITE);
	}
	while (true)
	{
		BeginBatchDraw();
		for (int i = 0; i < 21; i++)
		{
			a[i].fresh();
			b[i].fresh();
			c[i].fresh();
			d[i].fresh();
			e[i].fresh();
			f[i].fresh();
		}
		FlushBatchDraw();
		Sleep(20);
	}

}