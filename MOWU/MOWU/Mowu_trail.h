//Trail.h
//µ¯Ä»¹ì¼£º¯Êý
#pragma once
//Ö±Ïß¹ì¼£
void trail_line(const int t,int& x,int& y)
{
	x = 0.1*t;
	y = 0;
}
//ÉßÐÎ¹ì¼£
void trail_sin(const int t, int& x, int& y)
{
	x = 0.1*t;
	y = 20*sin(t / 100.0);
}
//Ô²ÐÎ¹ì¼£(ÄæÊ±Õë)
void trail_circle_0(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = 0.1*t*cos(t / 1000.0);
}
//Ô²ÐÎ¹ì¼£(Ë³Ê±Õë)
void trail_circle_1(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = -0.1*t*cos(t / 1000.0);
}
//Ô²ÐÎÑ²»Ø¹ì¼£(ÄæÊ±Õë)
void trail_circle_2(const int t, int &x, int &y)
{
	x = 0.05*t*sin(t / 1000.0);
	y = 0.1*t*cos(t / 1000.0);
}
//Ô²ÐÎÑ²»Ø¹ì¼£(Ë³Ê±Õë)
void trail_circle_3(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = -0.05*t*cos(t / 1000.0);
}
void trail_stop(const int t, int &x, int &y)
{
	x = 0;
	y = 0;
}