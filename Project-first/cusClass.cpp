#include <iostream>
using namespace std;

// �Զ�����
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
	cout << "-------����������󹤳�--------" << endl;
	Book book;
	book.id = 1;
	strcpy(book.name, "����������");
	book.money = 29;

	book.printBook(book);
	//cout << "book name:" << book.name << endl;

	return 0;
}