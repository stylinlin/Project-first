#include <iostream>
using namespace std;
int max(int& a, int& b);

int quote() {
	cout << "-------以下为引用--------" << endl;
	int i = 11;
	int& i2 = i;
	cout << i2 << endl;

	cout << "以下为引用参数应用" << endl;
	int a = 2, b = 3;
	cout << max(a, b) << endl;

	cout << a << "&" << b << endl;
	return 0;
}

// 引用类参数，在执行时可改变其值并影响调用者；变量类参数则不然
int max(int& a, int& b) {
	if (a > b) {
		b = a;
		return a;
	}
	else {
		a = b;
		return b;
	}
}
