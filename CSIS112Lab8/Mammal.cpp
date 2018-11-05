#include "pch.h"
#include "Mammal.h"


Mammal::Mammal()
{
	this->weight = 0;
	this->name = "";

	std::cout << "Invoking Mammal default constructor\n";
}

Mammal::Mammal(int weight, std::string name)
{
	this->weight = weight;
	this->name = name;

	std::cout << "Invoking Mammal secondary constructor.\n";
}


Mammal::~Mammal()
{
	std::cout << "Invoking Mammal default destructor.\n";
}

void Mammal::SetWeight(int weight)
{
	this->weight = weight;
}

void Mammal::SetName(std::string name)
{
	this->name = name;
}

int Mammal::GetWeight()
{
	return this->weight;
}

std::string Mammal::GetName()
{
	return this->name;
}
