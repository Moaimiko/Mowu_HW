//Trail.h
//��Ļ�켣����
#pragma once
//ֱ�߹켣
void trail_line(const int t,int& x,int& y)
{
	x = 0.1*t;
	y = 0;
}
void trail_sin(const int t, int& x, int& y)
{
	x = 0.1*t;
	y = 10*sin(t / 100.0);
}