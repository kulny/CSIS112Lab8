#pragma once
#include "Mammal.h"
class Pig :
	public Mammal
{
public:
	Pig(int weight, std::string name);
	~Pig();

	void Speak();
};

