//Mowu_time.h
//����ʱ����صĺ���
#ifndef CTIME
#define CTIME
#include<ctime>
#endif // !CTIME_H

//���ʱ�䣨��Ϸ��ʱ��
class SysGlobalTime
{
private:
	clock_t startTime;
	clock_t endTime;
public:
	//��ʼ��ʱ
	//��Ϸ��ʼʱ����һ��
	void start()
	{
		startTime = clock();
	}
	//��ȡ��ǰʱ��
	//����unsigned long���͵ĺ�����
	unsigned long now()	
	{
		endTime = clock();
		return (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
	}
}sysGlobalTime;

//��������ʱ��
class SysTime
{
private:
	clock_t startTime;
	clock_t endTime;
public:
	//��ʼ��ʱ
	//����ʼʱ����һ��
	void start()
	{
		startTime = clock();
	}
	//��ȡ��ǰʱ��
	//����unsigned long���͵ĺ�����
	unsigned long now()
	{
		endTime = clock();
		return (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
	}
};
