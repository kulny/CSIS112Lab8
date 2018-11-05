#pragma once
#include "Mammal.h"
class Cat :
	public Mammal
{
public:
	Cat(int weight, std::string name);
	~Cat();

	void Speak();
};

