#include <iostream>
using namespace std;

// 声明一个结构体
struct User {
	int id;
	char name[10];
	int age;
};

// 打印User信息
void printUser(User user);
void printUser(User* user); // 指针参数,成员用 -> 获取，例如：user->name 获取用户名

int cusStruct() {
	cout << "--------以下是自定义结构体----------" << endl;
	User user;
	strcpy(user.name, "小宁");
	user.id = 1;
	user.age = 28;

	/*cout << "user id:" << user.id << endl;
	cout << "user name:" << user.name << endl;
	cout << "user age:" << user.age << endl;*/

	//printUser(user);
	printUser(&user);
	return 0;
}

void printUser(User user) {
	cout << "user id:" << user.id << endl;
	cout << "user name:" << user.name << endl;
	cout << "user age:" << user.age << endl;
	return;
}
void printUser(User* user) {
	cout << "user id:" << user->id << endl;
	cout << "user name:" << user->name << endl;
	cout << "user age:" << user->age << endl;
	return;
}