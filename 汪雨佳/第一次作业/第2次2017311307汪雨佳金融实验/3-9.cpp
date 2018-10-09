// 3-9.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int nonprime(int n) {
	for (int i = 2; i <= ceil(sqrt(n)); i++)
	{
		if (n % i == 0)
			return 0;
			break;
		if (i == ceil(sqrt(n)))
		{
			return 1;
		}
	}
}

int main()
{
	int m;
	cout << "请输入一个整数:";
	cin >> m;
	if (nonprime(m))
		cout << m << "是质数" << endl;
	else
		cout << m << "不是质数" << endl;
	return 0;
}