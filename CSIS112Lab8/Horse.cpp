#include "pch.h"
#include "Horse.h"


Horse::Horse(int weight, std::string name)
{
	std::cout << "Invoking horse constructor\n";

	SetWeight(weight);
	SetName(name);
}

Horse::~Horse()
{
	std::cout << "Invoking horse destructor\n";
}

void Horse::Speak()
{
	std::cout << "I'm Mr. Ed\n";
}
