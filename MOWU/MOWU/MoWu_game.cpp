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
	initgraph(SCREEN_WIDTH,SCREEN_LENGTH);	//初始化UI界面
	Bullet a = { 100,100,10,0.9,trail_sin,WHITE};
	while (true)
	{
		BeginBatchDraw();
		a.fresh();
		FlushBatchDraw();
		Sleep(20);
	}

}