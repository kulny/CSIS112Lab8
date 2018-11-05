#include "pch.h"
#include "Dog.h"



Dog::Dog(int weight, std::string name)
{
	SetWeight(weight);
	SetName(name);

	std::cout << "Invoking dog constructor\n";
}

Dog::~Dog()
{
	std::cout << "Invoking dog destructor\n";
}

void Dog::Speak()
{
	std::cout << "Woof\n";
}
