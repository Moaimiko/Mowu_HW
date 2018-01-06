//Mowu_bullet.h
//���嵯Ļ�������
//#include"Mowu_time.h"

class Bullet
{
private:
	int x;			//��ʼλ��:X
	int y;			//��ʼλ��:y
	int nowx = 0;	//����λ��:x'
	int nowy = 0;	//����λ��:y'
	int r;			//��Ļ�뾶
	double angle;	//���ƽǶ�
	void(*trail)(int, int&, int&);//·����ʽ
	SysTime time;	//ʱ��
	int color;		//��ɫ
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