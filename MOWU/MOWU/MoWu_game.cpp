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
	initgraph(SCREEN_WIDTH,SCREEN_LENGTH);	//��ʼ��UI����
	Bullet a = { 20,20,50,0,trail_line,WHITE};
	while (true)
	{
		BeginBatchDraw();
		a.fresh();
		FlushBatchDraw();
		Sleep(20);
	}

}