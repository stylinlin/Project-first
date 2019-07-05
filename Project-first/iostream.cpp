#include <iostream>
using namespace std;

int ioStream() {
	// 输入输出流
	cout << "---------输入输出流------" << endl;
	char name[8] = "ws";
	//cin >> name;
	cout << "你的名字叫：" << name << endl;
	
	// 标准错误流（cerr）
	cerr << "这是cerr错误信息~" << endl;
	// 标准日志流（clog）
	clog << "这是clog日志信息~" << endl;
	return 0;
}