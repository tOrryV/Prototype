#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	virtual void setName(string* name) = 0;
	virtual string getName() = 0;
	virtual void setColor(string* color) = 0;
	virtual string getColor() = 0;

	virtual Animal* clone() const = 0;

};

class Cat : public Animal {
private:
	string* name;
	string* color;
	Cat(const Cat& donor);

public:
	Cat() {}
	~Cat();
	void setName(string* name) override;
	string getName() override;
	void setColor(string* color) override;
	string getColor() override;
	Cat* clone() const;
};


#endif