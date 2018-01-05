//Mowu_bullet.h
//定义弹幕相关内容
//#include"Mowu_time.h"
#include<cmath>

class Bullet
{
private:
	int x;			//初始位置:X
	int y;			//初始位置:y
	int r;			//弹幕半径
	int angle;		//绘制角度
	void(*trail)(int, int, int);//路径样式
	SysTime time;	//时间
	int color;		//颜色
public:
	Bullet(int x_ = 0, int y_ = 0, int r_ = 10, int angle_ = 0, void(*trail_)(int, int, int) = trail_line, int color_ = WHITE)
	{
		x = x_;
		y = y_;
		r = r_;
		angle = angle_;
		trail = trail_;
		color = color_;
		time.start();
	}
	void fresh()
	{
		static int nowx = x;
		static int nowy = y;
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(nowx, nowy, r);
		trail(time.now(), nowx, nowy);
		nowx = x + nowx * cos(angle) + nowy * sin(angle);
		nowy = y - nowx * sin(angle) + nowy * cos(angle);
		setlinecolor(color);
		setfillcolor(color);
		fillcircle(nowx, nowy, r);
	}

};