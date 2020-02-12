#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int studentID;
	string name;
public:
	Student(int studentID, string name): studentID(studentID), name(name){ }
	friend Student operator +(const Student& student, const Student& other) {
		return Student(student.studentID, student.name + " & " + other.name);
	}
	void showName() { cout << "ÀÌ¸§: " << name << '\n'; }
};

int main(void) {
	Student student(1, "³ªµ¿ºó");
	Student result = student + student;
	result.showName();
	system("pause");
}
