#include <iostream>

using namespace std;

/* ���� ���ε�
class A
{
public:
	void show() { cout << "A Ŭ�����Դϴ�." << endl; }
};

class B : public A
{
	void show() { cout << "B Ŭ�����Դϴ�." << endl; }
};

int main(void)
{
	A* p;
	A a;
	B b;
	p = &a;
	p->show();
	p = &b;
	p->show();		// ������ A Ŭ������ show()  �Լ��� ȣ���մϴ�.
	system("pause");
}
*/

// ���� ���ε� - ���� �Լ�
class A
{
public:
	virtual void show() { cout << "A Ŭ�����Դϴ�." << endl; }
};

class B : public A
{
	virtual void show() { cout << "B Ŭ�����Դϴ�." << endl; }
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
