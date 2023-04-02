#pragma once

#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	virtual void setName(string* name) {};
	virtual string getName() = 0;
	virtual void setColor(string* color) {};
	virtual string getColor() = 0;

	virtual Animal* clone() const = 0;

};

class Cat : public Animal {
private:
	string* name;
	string* color;
	Cat(const Cat& donor) {
		this->name = donor.name;
		this->color = donor.color;
	}

public:
	Cat() {}
	~Cat() {
		delete name;
		delete color;
	}
	void setName(string* name) override {
		this->name = name;
	}
	string getName() override {
		return *name;
	}
	void setColor(string* color) override {
		this->color = color;
	}
	string getColor() override {
		return *color;
	}
	Cat* clone() const {
		return new Cat(*this);
	}
};
