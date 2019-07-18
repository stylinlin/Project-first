// 顺序栈校验括号的算法
#include <iostream>
using namespace std;

// 类定义：顺序栈
class SqlStack {
private:
	int* base; // 栈底指针
	int top; // 栈顶位置
	int stackSize; // 栈容量
public:
	SqlStack(int m); // 构造方法，长度为m的栈
	~SqlStack() { // 销毁栈
		delete[] base;
		top = -1;
		stackSize = 0;
	};
	void push(int e); // 入栈
	int Pop(); // 出栈
	int getPop(); // 获取栈顶元素
	int stackEmpty(); // 测栈空
	//void stackTranverse(); // 显示栈元素

};

// 逐一实现定义的方法
// 构造方法
SqlStack::SqlStack(int  m) {
	if (m <= 0) {
		cout << "m为正整数" << endl;
		return;
	}
	top = 0;
	base = (int*)malloc(m * sizeof(int)); // 构造方法，申请表空间
	stackSize = m;
}

// 入栈
void SqlStack::push(int e) {
	if (top >= stackSize) {
		cout << "栈满，无法入栈" << endl;
		return;
	}
	top++;
	base[top] = e;
}

// 获取栈顶元素
int SqlStack::getPop() {
	if (top == 0) {
		cout << "栈空，无元素" << endl;
	}
	int e = base[top];
	return e;
}

// 测栈空
int SqlStack::stackEmpty() {
	if (top == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

// 出栈
int SqlStack::Pop() {
	int e;
	if (top == -1) {
		cout << "栈空，无法出栈" << endl;
		return -1;
	}
	e = base[top--];
	return e;
}

// 校验括号是否成对完整
int checkBrackets(char chars[], int length) {
	cout << "-------这里是使用栈校验括号是否匹配--------" << endl;
	if (chars == NULL) {
		cout << "字符为空" << endl;
		return -1;
	}
	SqlStack stack(10);
	int state = 1, i = 0;
	while (i < length && state) {
		char ci = chars[i];
		switch (ci)
		{
		case '(': { // 左括号
			stack.push(chars[i]);
			i++;
			break;
		}
		case ')': { // 右括号
			if (!stack.stackEmpty() && stack.getPop() == '(') {
				stack.Pop();
				i++;
			}
			else {
				state = 0;
			}
			break;
		}
		case '[': { // 左括号
			stack.push(chars[i]);
			i++;
			break;
		}
		case ']': { // 右括号
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