//<Mammal> -- polymorphism to dynamically use classes
//CSIS 112-<Section Number>
//<Sources if necessary>


//Include statements
#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <vector>
#include "Mammal.h"
#include "Cat.h"
#include "Dog.h"
#include "Horse.h"
#include "Pig.h"


using namespace std;

//Global declarations: Constants and type definitions only -- NO variables

//Function prototypes

Mammal* CreateAnimal();

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Cody Moore -- Lab Number 8" << endl << endl;

	//Variable declarations

	//Program logic

	srand(100);
	vector<Mammal*> animals; // vector must be Mammal* to hold Mammal pointers

	for (int i = 0; i < 5; i++)
	{
		animals.push_back(CreateAnimal()); // puts each pointer in the vector, creating the pointer in the CreateAnimal() function
	}
	for (Mammal* i : animals) // for each allows i to be the object
	{
		std::cout << i->GetName() << '\n' << i->GetWeight() << '\n'; // prints name, weight

		i->Speak(); // uses individual objects Speak function
		
		std::cout << '\n';
	}

	for (Mammal* m : animals) // deletes each dynamic object in the vector
	{
		delete m;
	}

	//Closing program statements
	system("pause");
	return 0;
}

//Function definitions

Mammal * CreateAnimal()
{
	int animalType;
	std::string name;

	std::cout << "Please pick an animal. 1 for Dog, 2 for Cat, 3 for Horse, 4 for Pig.\n";

	std::cin >> animalType;

	std::cout << "Please choose a name for the animal\n";

	std::cin >> name;

	if (animalType == 1) // each if makes a new Mammal* according to which derived class is intended according to the listing for animalType
	{
		Mammal * mammal = new Dog(rand() % 150, name);
		return mammal;
	}
	else if (animalType == 2)
	{
		Mammal * mammal = new Cat(rand() % 150, name);
		return mammal;
	}
	else if (animalType == 3)
	{
		Mammal * mammal = new Horse(rand() % 150, name);
		return mammal;
	}
	else if (animalType == 4)
	{
		Mammal * mammal = new Pig(rand() % 150, name);
		return mammal;
	}
}
