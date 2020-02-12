#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time {
	friend class Date;	// Date Ŭ�������� Time Ŭ������ �̿��� �� ����.
private:
	int hour, min, sec;
public:
	void setCurrentTime() {
		time_t currentTime = time(NULL);
		struct tm* p = localtime(&currentTime);
		hour = p->tm_hour;
		min = p->tm_min;
		sec = p->tm_sec;
	}
};

class Date {
private:
	int year, month, day;
public:
	Date(int year, int month, int day): year(year), month(month), day(day){ }
	void show(const Time& t) {
		cout << "������ ��¥: " << year << "�� " << month << "�� " << day << "�� " << '\n';
		cout << "���� �ð�: " << t.hour << ":" << t.min << ":" << t.sec << '\n';
	}
};

int main(void) {
	Time time;
	time.setCurrentTime();
	Date date = Date(2019, 12, 22);
	date.show(time);
	system("pause");
}
