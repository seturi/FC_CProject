#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int score;
public:
	Student(string n, int s) {
		name = n;
		score = s;
	}
	void show() {
		cout << name << " : " << score << "Á¡\n";
	}
};

int main(void) {
	Student a = Student("³ªµ¿ºó", 100);
	a.show();
	system("pause");
}
