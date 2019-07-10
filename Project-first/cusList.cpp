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
	ElemType* elem; // ָ���һ��Ԫ��
	int length; // ʵ�ʳ���
	int maxSize; // ����
};

int cusList() {
	// & ���õ��÷�
	cout << "����Ϊ���������ò���" << endl;
	int result, a = 1, b = 2;
	result = 1;

	sumCus(a, b, result);
	cout << "�������ĺ�Ϊ" << result << endl;
	cout << "----------����Ϊ�Զ������Ա�---------" << endl;
	CusList list = CusList(10);
	list.insert(1, 2);
	cout << "list sizeΪ��" << list.getLength() << endl;
	return 0;
}

void sumCus(int a, int b, int& result) {
	result = a + b;
	return;
}

// ���췽���У���ʼ�����Ա�
CusList::CusList(int n)
{
	elem = (int*)malloc(n * sizeof(int)); // ���췽���������ռ�
	length = 0;
	maxSize = n;
	cout << "��ʼ�����Ա����" << endl;
}

// ���������У��������Ա�
CusList::~CusList() // ��������������ʱ����
{
	delete[] elem;
	length = 0;
	maxSize = 0;
}

// �����Ա�λ��i������Ԫ��e
void CusList::insert(int i, int e) {
	if (length >= maxSize) {
		elem = (int*)realloc(elem, (maxSize + LISTINCREMENT) * sizeof(int));
		if (elem == NULL) {
			return;
		}
		maxSize += LISTINCREMENT;
	}
	if (i < 1 || i > length + 1) {
		cout << "����λ���쳣" << endl;
		return;
	}
	for (int j = length; j >= i; j--) {
		elem[j] = elem[j - 1]; // ��i length��Ԫ�����Ųһλ
	}
	elem[i - 1] = e; // iλ�ò�����Ԫ��e
	length++;

	return;
}
// ��ȡ���Ա��Ԫ�ظ���
int CusList::getLength()
{
	return length;
}


