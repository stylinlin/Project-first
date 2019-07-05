
#include <iostream>
#include <ctime>
using namespace std;

int time() {
	cout << "以下为时间相关测试" << endl;
	time_t now = time(0); // 系统当前日期/时间
	cout << "1970 到目前经过秒数:" << now << endl;

	// UTC相差8小时
	char* timeC = ctime(&now);
	cout << "本地日期和时间格式：" << timeC << endl;
	tm* tmTime = gmtime(&now); // tm结构格式
	char* tmChar = asctime(tmTime);
	cout << "UTC日期和时间：" << tmChar << endl;

	// 输出 tm 结构的各个组成部分
	tm* ltm = localtime(&now);
	cout << "年：" << 1900 + ltm->tm_year << endl;
	cout << "月：" << 1 + ltm->tm_mon << endl;
	cout << "日：" << ltm->tm_mday << endl;
	cout << "时：" << ltm->tm_hour << endl;

	return 0;

}