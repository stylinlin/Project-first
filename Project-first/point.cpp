#include <iostream>
using namespace std;
#include <ctime>

const int SIZE = 3;

void getSecond(long* par); // ������ָ������ĺ���

int ponit() {
	// ��ָ���ֵΪ0
	int* age = NULL;
	if (!age) {
		cout << "��ָ��age��ֵΪ��" << age << endl;
	}
	cout << "NULL��ֵΪ" << NULL << endl;

	// ָ�������е�Ӧ��
	int score[SIZE] = { 89,90,91 };
	int* ptr;
	ptr = score;
	// ָ�����ѭ��
	cout << "������ָ���������������" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "��" << i << "��ֵΪ" << *ptr << endl;
		ptr++;
	}

	ptr = score; // �ǵ����¸�ֵ�������������ٵ��������޷���ȡֵ�ˡ�
	cout << "������ָ��ȽϷ�����������" << endl;
	while (ptr <= &score[SIZE - 1]) {
		cout << *ptr << endl;
		ptr++;
	}

	// ָ�����飺�ɶ��ָ�����
	//ptr = score;
	int* ptrArray[SIZE];
	cout << "������ָ�������÷�" << endl;
	for (int i = 0; i <= SIZE - 1; i++) {
		ptrArray[i] = &score[i];
	}

	for (int i = 0; i <= SIZE - 1; i++) {
		cout << *ptrArray[i] << endl;
	}

	// ָ��ָ���ָ�루�༶���Ѱַ��
	cout << "������ָ��ָ���ָ����÷�" << endl;
	int no = 1;
	int* noPtr;
	noPtr = &no;
	int** pptr;
	pptr = &noPtr;
	cout << **pptr << endl;
	
	// ָ���ں����е�Ӧ��
	cout << "������ָ���ں����е�Ӧ��" << endl;
	long second;
	getSecond(&second);
	cout << "��ǰʱ�����Ϊ��" << second << endl;

	return 0;
}

// ��ȡ��ǰ������
void getSecond(long *par) {
	*par = time(NULL);
	return;
}