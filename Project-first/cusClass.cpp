#include <iostream>
using namespace std;

// 自定义类
class Book {
public:
	int id;
	char name[50];
	double money;
public: 
	void printBook(Book book) {
		cout << "book name:" << book.name << endl;
	}
};

int cusClass() {
	cout << "-------这里是类对象工厂--------" << endl;
	Book book;
	book.id = 1;
	strcpy(book.name, "闪闪亮晶晶");
	book.money = 29;

	book.printBook(book);
	//cout << "book name:" << book.name << endl;

	return 0;
}