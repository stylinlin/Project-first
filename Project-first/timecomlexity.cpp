#include <iostream>
using namespace std;

int timecomplexity(int n) {
	int m = 0, i, j;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 2 * i; j <= n; j++) {
			m++;
		}
	}

	cout << "n=" << n << ",��ִ�мӷ�������" << m << "��" << endl;
	return 0;
}