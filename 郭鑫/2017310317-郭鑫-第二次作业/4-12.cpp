#include "pch.h"
#include <iostream>
using namespace std;

class DataType {
private:
	enum {
		INT,
		DOUBLE,
		CHAR
	}mode;
	union {
		int a;
		double b;
		char c;
	};
public:
	DataType(int aa) {
		mode = INT;
		a = aa;
	}
	DataType(double bb) {
		mode = DOUBLE;
		b = bb;
	}
	DataType(char cc) {
		mode = CHAR;
		c = cc;
	}
	void print();
};

void DataType::print() {
	switch (mode) {
	case INT:
		cout << "int: " << a;
		break;
	case DOUBLE:
		cout << "double: " << b;
		break;
	case CHAR:
		cout << "char: " << c;
		break;
	}
	cout << endl;
}

int main() {
	DataType a('z');
	DataType b(12);
	DataType c(1.43);
	a.print();
	b.print();
	c.print();
	return 0;
}