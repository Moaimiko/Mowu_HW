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
	int delta_x;	//弹幕自机距离差:x
	int delta_y;	//弹幕自机距离差:y
	int r;			//弹幕半径
	double angle;	//绘制角度
	void(*trail)(int, int&, int&);//路径样式
	SysTime time;	//时间
	int color;		//颜色
public:
	Bullet(
		//默认值
		const int x_ = 0,
		const int y_ = 0,
		const int r_ = 10,
		const double angle_ = 0,
		void(*trail_)(int, int&, int&) = trail_line,
		int color_ = WHITE
	)

	{
		//赋值
		x = x_;
		y = y_;
		r = r_;
		angle = angle_;
		trail = trail_;
		color = color_;
		time.start();
	}
	//初始化弹幕
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
	//刷新弹幕&碰撞判定
	void fresh()
	{
		//擦除原图形
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(nowx, nowy, r);
		//计算自然坐标
		int a, b;
		trail(time.now(), a, b);
		//转化为全局坐标
		nowx = x + a * cos(angle) - b * sin(angle);
		nowy = y + a * sin(angle) + b * cos(angle);
		//绘制弹幕
		setlinecolor(WHITE);
		setfillcolor(color);
		fillcircle(nowx, nowy, r);
		setfillcolor(WHITE);
		//自机判定
		//计算全局坐标位置插值
		delta_x = nowx - self.SelfpointX();
		delta_y = nowy - self.SelfpointY();
		if (
			//短路计算快速过滤明显不会碰撞的弹幕
			delta_x < SAFE_DISTANCE&&
			delta_x > -1*SAFE_DISTANCE&&
			delta_y < SAFE_DISTANCE&&
			delta_y > -1*SAFE_DISTANCE&&
			//临近弹幕计算距离判定
			delta_x*delta_x + delta_y * delta_y <= r*r
			)
		{
			//碰撞判定
			alive = false;
		}
		//恢复为7秒前的状态（for demo）
		if (time.now() > 7000)
		{
			time.start();
		}
	}

};
