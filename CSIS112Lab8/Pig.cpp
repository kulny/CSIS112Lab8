#include "pch.h"
#include "Pig.h"


Pig::Pig(int weight, std::string name) {
	SetWeight(weight);
	SetName(name);

	std::cout << "Invoking pig constructor\n";
}


Pig::~Pig()
{
	std::cout << "invoking pig destructor\n";
}

void Pig::Speak()
{
	std::cout << "Oink\n";
}
