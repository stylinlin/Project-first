#include <iostream>
using namespace std;

// ����һ���ṹ��
struct User {
	int id;
	char name[10];
	int age;
};

// ��ӡUser��Ϣ
void printUser(User user);
void printUser(User* user); // ָ�����,��Ա�� -> ��ȡ�����磺user->name ��ȡ�û���

int cusStruct() {
	cout << "--------�������Զ���ṹ��----------" << endl;
	User user;
	strcpy(user.name, "С��");
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