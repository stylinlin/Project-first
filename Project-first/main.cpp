#include <iostream>
#include <stdio.h>
using namespace std;

// 常量
#define NOONE 1

int count = 5;
// extern 存储类
extern void test();

extern int ponit();

int main()
{
	//这是一行注释
	/*cout << "小宁呀\n";*/

#if 1
	cout << "hello world!\n";
#endif // 1

	typedef int cin;
	cin fee = 10;
	cout << fee << endl;

	// 枚举类型
	enum Color
	{
		happy = 1,
		unhappy = 3
	};

	Color c = happy;
	cout << "枚举变量c的值为：" << c << endl;

	// 常量
	const int NOTWO = 2;
	printf_s("常量NOONE的值为：%d\n", NOONE);

	test();

	printf_s("%s\n", "------- 下面且看指针 ---------");
	int  var1 = 1;
	char var2[10];

	int *ipVar1 = &var1;

	printf("var1 变量的地址： %p\n", &var1);
	printf("var2 变量的地址： %p\n", &var2);

	cout << "ipVar1的值" << ipVar1 << "\n" << endl;
	cout << "*ipVar1的值" << *ipVar1 << "\n" << endl;
	printf("ipVar1 指针变量的为： %p\n", ipVar1);

	ponit();

	return 0;
}