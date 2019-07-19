#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// 常量
#define NOONE 1

int count = 5;
// extern 存储类
extern void test();

extern int ponit();
extern int quote();
extern int time();
extern int ioStream();
extern int cusStruct();
extern int cusClass();
extern int timecomplexity(int n);
extern int cusList();
extern int checkBrackets(char chars[], int length);

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

	int* ipVar1 = &var1;

	printf("var1 变量的地址： %p\n", &var1);
	printf("var2 变量的地址： %p\n", &var2);

	cout << "ipVar1的值" << ipVar1 << "\n" << endl;
	cout << "*ipVar1的值" << *ipVar1 << "\n" << endl;
	printf("ipVar1 指针变量的为： %p\n", ipVar1);

	ponit();

	quote();
	time();
	ioStream();
	cusStruct();
	cusClass();
	timecomplexity(1);
	cusList();

	char chars[] = { '[','(',')',']','[','(','{','}',')',']' };
	int result = checkBrackets(chars, 10); // 校验括号匹配与否,注意数组大小和参数值要相等
	string show = "";
	if (1 == result) {
		show="匹配";
	}
	else {
		show="不匹配";
	}
	cout << "括号匹配状态：" << show << endl;



















	/*timecomplexity(2);
	timecomplexity(3);
	timecomplexity(4);
	timecomplexity(5);
	timecomplexity(6);
	timecomplexity(7);
	timecomplexity(8);
	timecomplexity(9);
	timecomplexity(10);
	timecomplexity(11);
	timecomplexity(12);
	timecomplexity(13);
	timecomplexity(14);
	timecomplexity(15);*/

	return 0;
}