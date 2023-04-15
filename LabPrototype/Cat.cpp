#include "Cat.h"

Cat::Cat(const Cat& donor) {
	this->name = donor.name;
	this->color = donor.color;
}

Cat::~Cat() {
	delete name;
	delete color;
}

void Cat::setName(string* name) {
	this->name = name;
}

string Cat::getName() {
	return *name;
}

void Cat::setColor(string* color) {
	this->color = color;
}

string Cat::getColor() {
	return *color;
}

Cat* Cat::clone() const {
	return new Cat(*this);
}
