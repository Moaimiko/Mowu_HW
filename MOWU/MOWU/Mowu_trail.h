//Trail.h
//弹幕轨迹函数
#pragma once
//直线轨迹
void trail_line(const int t,int& x,int& y)
{
	x = 0.1*t;
	y = 0;
}
//蛇形轨迹
void trail_sin(const int t, int& x, int& y)
{
	x = 0.1*t;
	y = 20*sin(t / 100.0);
}
//圆形轨迹(逆时针)
void trail_circle_0(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = 0.1*t*cos(t / 1000.0);
}
//圆形轨迹(顺时针)
void trail_circle_1(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = -0.1*t*cos(t / 1000.0);
}
//圆形巡回轨迹(逆时针)
void trail_circle_2(const int t, int &x, int &y)
{
	x = 0.05*t*sin(t / 1000.0);
	y = 0.1*t*cos(t / 1000.0);
}
//圆形巡回轨迹(顺时针)
void trail_circle_3(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = -0.05*t*cos(t / 1000.0);
}
//静止弹幕（测试用）
void trail_stop(const int t, int &x, int &y)
{
	x = 0;
	y = 0;
}
