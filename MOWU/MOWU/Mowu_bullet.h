//Mowu_bullet.h
//定义弹幕相关内容
#include"Mowu_time.h"

class Bullet
{
private:
	int x;			//初始位置:X
	int y;			//初始位置:y
	int angle;		//绘制角度
	void(*way)(int);//路径样式
	SysTime time;	//时间
	int color;		//颜色
public:
	Bullet(int x_, int y_, int angle_, void(*way_)(int),int color_)
	{
		x = x_;
		y = y_;
		angle = angle_;
		way = way_;
		color = color_;
	}

};