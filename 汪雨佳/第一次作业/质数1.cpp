// 质数1.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Non prime numbers between 0 and 100 include:" << endl;

	for (n = 0; n <= 100; n++)
	{
		for (int i = 2; i <= ceil(sqrt(n)); i++)
		{
			if (n % i == 0)
				break;
			if (i == ceil(sqrt(n)))
			{
				cout << n << " ";
			}
		}
	}return 0;
}

