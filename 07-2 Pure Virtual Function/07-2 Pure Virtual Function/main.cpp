#include <iostream>

using namespace std;

class A
{
public:
	virtual void show()=0 { cout << "A Ŭ�����Դϴ�." << endl; }
};

class B : public A
{
	// show() �Լ��� ���������� ������ BŬ������ ��ü�� ����� �� �����ϴ�.
	virtual void show() { cout << "B Ŭ�����Դϴ�." << endl; }
};

int main(void)
{
	A* p;
	B b;
	p = &b;
	p->show();
	system("pause");
}
