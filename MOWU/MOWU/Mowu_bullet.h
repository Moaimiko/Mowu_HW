//Mowu_bullet.h
//���嵯Ļ�������
#include"Mowu_time.h"

class Bullet
{
private:
	int x;			//��ʼλ��:X
	int y;			//��ʼλ��:y
	int angle;		//���ƽǶ�
	void(*way)(int);//·����ʽ
	SysTime time;	//ʱ��
	int color;		//��ɫ
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