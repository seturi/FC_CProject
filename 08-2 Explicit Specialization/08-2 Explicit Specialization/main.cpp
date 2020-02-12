#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<> void change<int>(int& a, int& b) {
	cout << "������ �����͸� ��ü�մϴ�.\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a = 15;
	int b = 3;
	change(a, b);
	cout << a << ":" << b << endl;
	system("pause");
}
