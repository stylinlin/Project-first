#include <iostream>
using namespace std;

int ioStream() {
	// ���������
	cout << "---------���������------" << endl;
	char name[8] = "ws";
	//cin >> name;
	cout << "������ֽУ�" << name << endl;
	
	// ��׼��������cerr��
	cerr << "����cerr������Ϣ~" << endl;
	// ��׼��־����clog��
	clog << "����clog��־��Ϣ~" << endl;
	return 0;
}