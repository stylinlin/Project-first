#include <iostream>
#include <stdio.h>
using namespace std;

// ����
#define NOONE 1

int count = 5;
// extern �洢��
extern void test();

extern int ponit();

int main()
{
	//����һ��ע��
	/*cout << "С��ѽ\n";*/

#if 1
	cout << "hello world!\n";
#endif // 1

	typedef int cin;
	cin fee = 10;
	cout << fee << endl;

	// ö������
	enum Color
	{
		happy = 1,
		unhappy = 3
	};

	Color c = happy;
	cout << "ö�ٱ���c��ֵΪ��" << c << endl;

	// ����
	const int NOTWO = 2;
	printf_s("����NOONE��ֵΪ��%d\n", NOONE);

	test();

	printf_s("%s\n", "------- �����ҿ�ָ�� ---------");
	int  var1 = 1;
	char var2[10];

	int *ipVar1 = &var1;

	printf("var1 �����ĵ�ַ�� %p\n", &var1);
	printf("var2 �����ĵ�ַ�� %p\n", &var2);

	cout << "ipVar1��ֵ" << ipVar1 << "\n" << endl;
	cout << "*ipVar1��ֵ" << *ipVar1 << "\n" << endl;
	printf("ipVar1 ָ�������Ϊ�� %p\n", ipVar1);

	ponit();

	return 0;
}