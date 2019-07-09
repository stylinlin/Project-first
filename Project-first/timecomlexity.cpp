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

	cout << "n=" << n << ",共执行加法次数：" << m << "次" << endl;
	return 0;
}