#pragma once
#include "Mammal.h"
class Dog :
	public Mammal
{
public:
	Dog(int weight, std::string name);
	~Dog();

	void Speak();
};

