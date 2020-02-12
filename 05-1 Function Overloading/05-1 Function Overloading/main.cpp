#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() {name = "¿”≤©¡§";}
	Person(string name): name(name){ }
	void showName() { cout << "¿Ã∏ß: " << name << '\n'; }
};

int main(void) {
	Person person1;
	person1.showName();
	Person person2("≥™µø∫Û");
	person2.showName();
	system("pause");
}
