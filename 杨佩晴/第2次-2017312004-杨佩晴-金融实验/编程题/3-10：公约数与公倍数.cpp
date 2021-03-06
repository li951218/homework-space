// 3-10：公约数与公倍数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int common_divisor(int x, int y) {                    /*采用辗转相除法*/
	int a;
	int b;
	int t;
	bool flag=true;
	x > y ? a = x : a = y;
	x > y ? b = y : b = x;
	while (flag==true) {
		if (a%b == 0) {
			cout << "最大公约数为" << b << endl;
			flag = false;
		}
		else {
			t = a % b;
			a = b;
			b = t;
		}
	}
	return 0;
}

int common_multiple(int g, int h) {
	int p;
	int q;
	int s;
	bool flag = true;
	g > h ? p = g : p = h;
	g > h ? q = h : q = p;
	s = p;
	while (flag == true) {
		if (s%q == 0) {
			cout << "最大公倍数为" << s;
			flag = false;
		}
		else {
			s +=p;
		}
	}
	return 0;
}

int main() {
	int m, n;
	cout << "现在开始计算最小公约数。请你请输入一个整数";
	cin >> m;
	cout << "请再输入一个整数";
    cin >> n;
	common_divisor(m, n);
	common_multiple(m, n);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
