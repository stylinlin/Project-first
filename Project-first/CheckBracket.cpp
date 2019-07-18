// ˳��ջУ�����ŵ��㷨
#include <iostream>
using namespace std;

// �ඨ�壺˳��ջ
class SqlStack {
private:
	int* base; // ջ��ָ��
	int top; // ջ��λ��
	int stackSize; // ջ����
public:
	SqlStack(int m); // ���췽��������Ϊm��ջ
	~SqlStack() { // ����ջ
		delete[] base;
		top = -1;
		stackSize = 0;
	};
	void push(int e); // ��ջ
	int Pop(); // ��ջ
	int getPop(); // ��ȡջ��Ԫ��
	int stackEmpty(); // ��ջ��
	//void stackTranverse(); // ��ʾջԪ��

};

// ��һʵ�ֶ���ķ���
// ���췽��
SqlStack::SqlStack(int  m) {
	if (m <= 0) {
		cout << "mΪ������" << endl;
		return;
	}
	top = 0;
	base = (int*)malloc(m * sizeof(int)); // ���췽���������ռ�
	stackSize = m;
}

// ��ջ
void SqlStack::push(int e) {
	if (top >= stackSize) {
		cout << "ջ�����޷���ջ" << endl;
		return;
	}
	top++;
	base[top] = e;
}

// ��ȡջ��Ԫ��
int SqlStack::getPop() {
	if (top == 0) {
		cout << "ջ�գ���Ԫ��" << endl;
	}
	int e = base[top];
	return e;
}

// ��ջ��
int SqlStack::stackEmpty() {
	if (top == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

// ��ջ
int SqlStack::Pop() {
	int e;
	if (top == -1) {
		cout << "ջ�գ��޷���ջ" << endl;
		return -1;
	}
	e = base[top--];
	return e;
}

// У�������Ƿ�ɶ�����
int checkBrackets(char chars[], int length) {
	cout << "-------������ʹ��ջУ�������Ƿ�ƥ��--------" << endl;
	if (chars == NULL) {
		cout << "�ַ�Ϊ��" << endl;
		return -1;
	}
	SqlStack stack(10);
	int state = 1, i = 0;
	while (i < length && state) {
		char ci = chars[i];
		switch (ci)
		{
		case '(': { // ������
			stack.push(chars[i]);
			i++;
			break;
		}
		case ')': { // ������
			if (!stack.stackEmpty() && stack.getPop() == '(') {
				stack.Pop();
				i++;
			}
			else {
				state = 0;
			}
			break;
		}
		case '[': { // ������
			stack.push(chars[i]);
			i++;
			break;
		}
		case ']': { // ������
			if (!stack.stackEmpty() && stack.getPop() == '[') {
				stack.Pop();
				i++;
			}
			else {
				state = 0;
			}
			break;
		}

		default:
		{
			i++;
			break;
		}
		}

		
	}
	if (stack.stackEmpty() && state) {
		return 1;
	}
	else {
		return 0;
	}
}