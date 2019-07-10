#include <iostream>
using namespace std;
void sumCus(int a, int b, int& result);

const int LISTINCREMENT = 10;
typedef int ElemType;
class CusList
{
public:
	CusList(int n);
	~CusList();
	void insert(int i, int e);
	int getLength();
private:
	ElemType* elem; // 指向第一个元素
	int length; // 实际长度
	int maxSize; // 容量
};

int cusList() {
	// & 引用的用法
	cout << "以下为函数带引用参数" << endl;
	int result, a = 1, b = 2;
	result = 1;

	sumCus(a, b, result);
	cout << "两个数的和为" << result << endl;
	cout << "----------以下为自定义线性表---------" << endl;
	CusList list = CusList(10);
	list.insert(1, 2);
	cout << "list size为：" << list.getLength() << endl;
	return 0;
}

void sumCus(int a, int b, int& result) {
	result = a + b;
	return;
}

// 构造方法中，初始化线性表
CusList::CusList(int n)
{
	elem = (int*)malloc(n * sizeof(int)); // 构造方法，申请表空间
	length = 0;
	maxSize = n;
	cout << "初始化线性表完毕" << endl;
}

// 析构函数中，销毁线性表
CusList::~CusList() // 析构函数，销毁时调用
{
	delete[] elem;
	length = 0;
	maxSize = 0;
}

// 在线性表位置i处插入元素e
void CusList::insert(int i, int e) {
	if (length >= maxSize) {
		elem = (int*)realloc(elem, (maxSize + LISTINCREMENT) * sizeof(int));
		if (elem == NULL) {
			return;
		}
		maxSize += LISTINCREMENT;
	}
	if (i < 1 || i > length + 1) {
		cout << "插入位置异常" << endl;
		return;
	}
	for (int j = length; j >= i; j--) {
		elem[j] = elem[j - 1]; // 将i length的元素向后挪一位
	}
	elem[i - 1] = e; // i位置插入新元素e
	length++;

	return;
}
// 获取线性表的元素个数
int CusList::getLength()
{
	return length;
}


