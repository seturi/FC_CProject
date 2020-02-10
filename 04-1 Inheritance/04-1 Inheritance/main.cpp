#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string name): name(name){ }
	string getName() {
		return name;
	}
	void showName() {
		cout << "�̸�: " << getName() << '\n';
	}
};

class Student : Person {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID = studentID;
	}
	void show() {
		cout << "�л� ��ȣ: " << studentID << '\n';
		cout << "�л� �̸�: " << getName() << '\n';
	}
};

int main(void) {
	Student student(1, "������");
	student.show();
	system("pause");
}
