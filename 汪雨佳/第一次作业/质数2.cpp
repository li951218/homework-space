// 质数2.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Non prime numbers between 0 and 100 include:" << endl;

	while (n<=100)
	{
		int i = 2;
		while (i<=ceil(sqrt(n)))
		{
			if (n % i == 0)
				break;
			if (i == ceil(sqrt(n)))
			{
				cout << n << " ";
			}
			i++;
		}
		n++;
	}return 0;
}