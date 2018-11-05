#pragma once
#include "Mammal.h"
class Horse :
	public Mammal
{
public:
	Horse(int weight, std::string name);
	~Horse();

	void Speak();
};

