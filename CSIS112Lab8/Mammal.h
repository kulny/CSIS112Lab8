#pragma once

#include <string>
#include <iostream>



class Mammal
{
public:
	Mammal(); // sets weight to 0 and name to ""
	Mammal(int weight, std::string name);
	virtual ~Mammal();

	void virtual Speak() = 0;

	//Setters
	void SetWeight(int weight);
	void SetName(std::string name);

	//Getters
	int GetWeight();
	std::string GetName();



private:
	int weight;
	std::string name;


};

