#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	static int count;
	Person(string name) : name(name) {
		count++;
	}
};

int Person::count = 0;

int main(void) {
	Person p1("������");
	Person p2("ȫ�浿");
	Person p3("�̼���");
	cout << "����� ��: " << Person::count << '\n';
	system("pause");
}
