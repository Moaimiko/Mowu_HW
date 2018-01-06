//Trail.h
//��Ļ�켣����
#pragma once
//ֱ�߹켣
void trail_line(const int t,int& x,int& y)
{
	x = 0.1*t;
	y = 0;
}
//���ι켣
void trail_sin(const int t, int& x, int& y)
{
	x = 0.1*t;
	y = 20*sin(t / 100.0);
}
//Բ�ι켣(��ʱ��)
void trail_circle_0(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = 0.1*t*cos(t / 1000.0);
}
//Բ�ι켣(˳ʱ��)
void trail_circle_1(const int t, int &x, int &y)
{
	x = 0.1*t*sin(t / 1000.0);
	y = -0.1*t*cos(t / 1000.0);
}
//Բ��Ѳ�ع켣(��ʱ��)
void trail_circle_2(const int t, int &x, int &y)
{
	x = 0.05*t*sin(t / 1000.0);
	y = 0.1*t*cos(t / 1000.0);
}
//Բ��Ѳ�ع켣(˳ʱ��)
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