#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	const int id;
	string name;
public:
	static int count;
	Person(int id, string name) :id(id), name(name) {
		count++;
	}
	/*
	void setID(int id) {
		this->id = id;		// 오류 발생(수정 불가능)
	}
	*/
};

int Person::count = 0;

int main(void) {
	Person p1(1, "나동빈");
	Person p2(2, "홍길동");
	Person p3(3, "이순신");
	cout << "사람의 수: " << Person::count << '\n';
	system("pause");
}
