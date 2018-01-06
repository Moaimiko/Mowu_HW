//Mowu_bullet.h
//定义弹幕相关内容
//#include"Mowu_time.h"

class Bullet
{
private:
	int x;			//初始位置:X
	int y;			//初始位置:y
	int nowx = 0;	//坐标位置:x'
	int nowy = 0;	//坐标位置:y'
	int r;			//弹幕半径
	double angle;	//绘制角度
	void(*trail)(int, int&, int&);//路径样式
	SysTime time;	//时间
	int color;		//颜色
public:
	Bullet(
		const int x_ = 0,
		const int y_ = 0,
		const int r_ = 10,
		const double angle_ = 0,
		void(*trail_)(int, int&, int&) = trail_line,
		int color_ = WHITE
	)

	{
		x = x_;
		y = y_;
		r = r_;
		angle = angle_;
		trail = trail_;
		color = color_;
		time.start();
	}
	void initialization(
		const int x_ = 0,
		const int y_ = 0,
		const int r_ = 10,
		const double angle_ = 0,
		void(*trail_)(int, int&, int&) = trail_line,
		int color_ = WHITE
	)

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
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(nowx, nowy, r);
		int a, b;
		trail(time.now(), a, b);
		nowx = x + a * cos(angle) - b * sin(angle);
		nowy = y + a * sin(angle) + b * cos(angle);
		setlinecolor(color);
		setfillcolor(color);
		fillcircle(nowx, nowy, r);
	}

};