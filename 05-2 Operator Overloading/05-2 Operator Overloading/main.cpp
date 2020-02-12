#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() { name = "¿”≤©¡§"; }
	Person(string name): name(name){ }
	Person operator +(const Person& other) { return Person(name + " & " + other.name); }
	void showName() { cout << "¿Ã∏ß: " << name << '\n'; }
};

int main(void) {
	Person person1;
	Person person2("≥™µø∫Û");
	Person result = person1 + person2;
	result.showName();
	system("pause");
}
