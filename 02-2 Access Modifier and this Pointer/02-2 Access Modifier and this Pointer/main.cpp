#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int englishScore;
	int mathScore;
	int getSum() {
		return englishScore + mathScore;	// ���� ����
	}
public:
	Student(string name, int englishScore, int mathScore) {
		this->name = name;	// this : �ڱ� �ڽ��� ��� ������ ����
		this->englishScore = englishScore;
		this->mathScore = mathScore;
	}
	void show() {
		cout << name << " : [�հ� " << getSum() << "��]\n";
	}
};

int main(void) {
	Student a = Student("������", 100, 98);
	a.show();
	// cout << a.getSum();		// private ���� �����ڴ� �ܺο��� ������ �� ����. (���� �߻�)
	system("pause");
}
