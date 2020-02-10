#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int englishScore;
	int mathScore;
	int getSum() {
		return englishScore + mathScore;	// 정보 은닉
	}
public:
	Student(string name, int englishScore, int mathScore) {
		this->name = name;	// this : 자기 자신의 멤버 변수에 접근
		this->englishScore = englishScore;
		this->mathScore = mathScore;
	}
	void show() {
		cout << name << " : [합계 " << getSum() << "점]\n";
	}
};

int main(void) {
	Student a = Student("나동빈", 100, 98);
	a.show();
	// cout << a.getSum();		// private 접근 한정자는 외부에서 접근할 수 없음. (오류 발생)
	system("pause");
}
