#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() {name = "�Ӳ���";}
	Person(string name): name(name){ }
	void showName() { cout << "�̸�: " << name << '\n'; }
};

int main(void) {
	Person person1;
	person1.showName();
	Person person2("������");
	person2.showName();
	system("pause");
}
