#include <iostream>

using namespace std;

/* 정적 바인딩
class A
{
public:
	void show() { cout << "A 클래스입니다." << endl; }
};

class B : public A
{
	void show() { cout << "B 클래스입니다." << endl; }
};

int main(void)
{
	A* p;
	A a;
	B b;
	p = &a;
	p->show();
	p = &b;
	p->show();		// 여전히 A 클래스의 show()  함수를 호출합니다.
	system("pause");
}
*/

// 동적 바인딩 - 가상 함수
class A
{
public:
	virtual void show() { cout << "A 클래스입니다." << endl; }
};

class B : public A
{
	virtual void show() { cout << "B 클래스입니다." << endl; }
};

int main(void)
{
	A* p;
	A a;
	B b;
	p = &a;
	p->show();
	p = &b;
	p->show();
	system("pause");
}
