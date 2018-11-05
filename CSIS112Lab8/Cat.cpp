#include "pch.h"
#include "Cat.h"





Cat::Cat(int weight, std::string name)
{
	SetWeight(weight);
	SetName(name);

	std::cout << "Invoking cat constructor.\n";
}

Cat::~Cat()
{
	std::cout << "Invoking cat destructor\n";
}

void Cat::Speak()
{
	std::cout << "Meow\n";
}
