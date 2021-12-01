//
//  main.cpp
//  Lab 10
//
//  Created by Nils Streedain on 11/29/21.
//

#include <iostream>
#include "pet.h"
#include "dog.h"

int main(int argc, const char * argv[]) {
	std::string name;
	int weight;
	std::string breed;
	
	// Create pet
	std::cout << "What would you like to name the pet?" << std::endl;
	std::cin >> name;
	std::cout << std::endl;
	
	std::cout << "What is the weight of the pet?" << std::endl;
	std::cin >> weight;
	std::cout << std::endl;
	
	Pet pet(name, weight);
	std::cout << pet.getLifespan() << std::endl;
	
	// Array of dogs
	int numDogs;
	std::cout << "How many dogs should there be?" << std::endl;
	std::cin >> numDogs;
	std::cout << std::endl;
	
	Dog* dogs = new Dog[numDogs]();
	
	for (int i = 0; i < numDogs; i++) {
		std::cout << "What would you like to name dog " << i + 1 << "?" << std::endl;
		std::cin >> name;
		std::cout << std::endl;
		dogs[i].setName(name);
		
		std::cout << "What is the weight of dog " << i + 1 << "?" << std::endl;
		std::cin >> weight;
		std::cout << std::endl;
		dogs[i].setWeight(weight);
		
		std::cout << "What is the breed of dog " << i + 1 << "?" << std::endl;
		std::cin >> breed;
		std::cout << std::endl;
		dogs[i].setBreed(breed);
	}
	
	for (int i = 0; i< numDogs; i++)
		std::cout << "The lifespan of dog " << i + 1 << " is " << dogs[i].getLifespan() << std::endl;
	
	delete [] dogs;

	return 0;
}
