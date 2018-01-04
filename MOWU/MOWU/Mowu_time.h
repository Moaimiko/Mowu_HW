//Mowu_time.h
//此头文件包含了时间相关的函数
#ifndef CTIME
#define CTIME
#include<ctime>
#endif // !CTIME_H

//宏观时间（游戏计时）
class SysGlobalTime
{
private:
	clock_t startTime;
	clock_t endTime;
public:
	//开始计时
	//游戏开始时调用一次
	void start()
	{
		startTime = clock();
	}
	//获取当前时间
	//返回unsigned long类型的毫秒数
	unsigned long now()	
	{
		endTime = clock();
		return (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
	}
}sysGlobalTime;

//对象坐标时间
class SysTime
{
private:
	clock_t startTime;
	clock_t endTime;
public:
	//开始计时
	//对象开始时调用一次
	void start()
	{
		startTime = clock();
	}
	//获取当前时间
	//返回unsigned long类型的毫秒数
	unsigned long now()
	{
		endTime = clock();
		return (endTime - startTime) * 1000 / CLOCKS_PER_SEC;
};
