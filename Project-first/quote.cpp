#include <iostream>
using namespace std;
int max(int& a, int& b);

int quote() {
	cout << "-------����Ϊ����--------" << endl;
	int i = 11;
	int& i2 = i;
	cout << i2 << endl;

	cout << "����Ϊ���ò���Ӧ��" << endl;
	int a = 2, b = 3;
	cout << max(a, b) << endl;

	cout << a << "&" << b << endl;
	return 0;
}

// �������������ִ��ʱ�ɸı���ֵ��Ӱ������ߣ������������Ȼ
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
