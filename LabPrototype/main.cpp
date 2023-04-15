#include "Cat.h"

int main() {

	Cat* catDonor = new Cat();
	string name = "Marsik";
	string color = "Black";
	catDonor->setName(&name);
	catDonor->setColor(&color);

	Cat* catClone = catDonor->clone();

	cout << "Donor name: " << catDonor->getName() << endl;
	cout << "Copy name: " << catClone->getName() << endl;
	cout << "Donor color: " << catDonor->getColor() << endl;
	cout << "Copy color: " << catClone->getColor() << endl;

	return 0;
}