// 3-15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int getpower(int x, int y);
double getpower(double x, int y);


int main()
{
	int a, m;
	double b;
	cout << "请输入一个整数a=" ;
	cin >> a;
	cout << "请输入一个实数b=" ;
	cin >> b;
	cout << "请输入一个整数m=" ;
	cin >> m;
	cout << "a的m次方是：" << getpower(a, m) << endl;
	cout << "b的m次方是：" << getpower(b, m) << endl;

    return 0;
}
int getpower(int x,int y)
{if(y>=0)
{
	if (y == 0) return 1;
	else if (y == 1) return x;
	else return x*getpower(x, y - 1);
}
else return 0;
}
double getpower(double x, int y)
{
	static double s = 1;
	if (y == 0) return 1;
	if (y > 0)
	{
		s *= x; getpower(x, --y);
	}
	if (y < 0)
	{
		s *= 1.0 / x; getpower(x, ++y);
	}
	return s;
}