
#include <iostream>
#include <ctime>
using namespace std;

int time() {
	cout << "����Ϊʱ����ز���" << endl;
	time_t now = time(0); // ϵͳ��ǰ����/ʱ��
	cout << "1970 ��Ŀǰ��������:" << now << endl;

	// UTC���8Сʱ
	char* timeC = ctime(&now);
	cout << "�������ں�ʱ���ʽ��" << timeC << endl;
	tm* tmTime = gmtime(&now); // tm�ṹ��ʽ
	char* tmChar = asctime(tmTime);
	cout << "UTC���ں�ʱ�䣺" << tmChar << endl;

	// ��� tm �ṹ�ĸ�����ɲ���
	tm* ltm = localtime(&now);
	cout << "�꣺" << 1900 + ltm->tm_year << endl;
	cout << "�£�" << 1 + ltm->tm_mon << endl;
	cout << "�գ�" << ltm->tm_mday << endl;
	cout << "ʱ��" << ltm->tm_hour << endl;

	return 0;

}