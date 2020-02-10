#include <iostream>
#include <string>

using namespace std;

class Character {
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	Character(string name, int hp, int damage): name(name), ragePoint(0), hp(hp), damage(damage){ }
	/*
	Character(string name, int hp, int damage) {
		this->name = name;
		this->ragePoint = 0;
		this->hp = hp;
		this->damage = damage;
	*/
	Character(const Character& other) {
		name = other.name;
		ragePoint = other.ragePoint;
		hp = other.hp;
		damage = other.damage;
	}

	void pointUp() {
		ragePoint++;
	}
	void show() {
		cout << name << "[" << ragePoint << "] " << hp << " " << damage << '\n';
	}
};

int main(void) {
	Character character1("½½¶óÀÓ", 10, 20);
	character1.pointUp();
	Character character2(character1);
	character2.pointUp();
	character1.show();
	character2.show();
	system("pause");
}
