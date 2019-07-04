#include <iostream>
using namespace std;
#include <ctime>

const int SIZE = 3;

void getSecond(long* par); // 声明带指针参数的函数

int ponit() {
	// 空指针的值为0
	int* age = NULL;
	if (!age) {
		cout << "空指针age的值为：" << age << endl;
	}
	cout << "NULL的值为" << NULL << endl;

	// 指针数组中的应用
	int score[SIZE] = { 89,90,91 };
	int* ptr;
	ptr = score;
	// 指针递增循环
	cout << "以下是指针递增法遍历数组" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "第" << i << "的值为" << *ptr << endl;
		ptr++;
	}

	ptr = score; // 记得重新赋值，否则递增最后再递增，则无法获取值了。
	cout << "以下是指针比较法法遍历数组" << endl;
	while (ptr <= &score[SIZE - 1]) {
		cout << *ptr << endl;
		ptr++;
	}

	// 指针数组：由多个指针组成
	//ptr = score;
	int* ptrArray[SIZE];
	cout << "以下是指针数组用法" << endl;
	for (int i = 0; i <= SIZE - 1; i++) {
		ptrArray[i] = &score[i];
	}

	for (int i = 0; i <= SIZE - 1; i++) {
		cout << *ptrArray[i] << endl;
	}

	// 指向指针的指针（多级间接寻址）
	cout << "以下是指向指针的指针的用法" << endl;
	int no = 1;
	int* noPtr;
	noPtr = &no;
	int** pptr;
	pptr = &noPtr;
	cout << **pptr << endl;
	
	// 指针在函数中的应用
	cout << "以下是指针在函数中的应用" << endl;
	long second;
	getSecond(&second);
	cout << "当前时间秒计为：" << second << endl;

	return 0;
}

// 获取当前的秒数
void getSecond(long *par) {
	*par = time(NULL);
	return;
}