//Trail.h
//µ¯Ä»¹ì¼£º¯Êý
#pragma once
//Ö±Ïß¹ì¼£
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