#include <iostream>
#include "allClasses.h"

int main() {
	warrior warr1;
	wizard wiz1;
	rogue rog1;
	cleric cler1;

	std::cout << "Warrior\n"
		<< "HP " << warr1.getMaxHp() << '\n'
		<< "STR " << warr1.getStrength() << '\n'
		<< "INT " << warr1.getIntellect() << '\n';



	return 0;
}