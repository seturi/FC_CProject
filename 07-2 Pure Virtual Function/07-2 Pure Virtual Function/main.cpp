#include <iostream>

using namespace std;

class A
{
public:
	virtual void show()=0 { cout << "A 클래스입니다." << endl; }
};

class B : public A
{
	// show() 함수를 재정의하지 않으면 B클래스의 객체를 사용할 수 없습니다.
	virtual void show() { cout << "B 클래스입니다." << endl; }
};

int main(void)
{
	A* p;
	B b;
	p = &b;
	p->show();
	system("pause");
}
