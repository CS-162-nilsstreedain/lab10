//
//  dog.cpp
//  Lab 10
//
//  Created by Nils Streedain on 11/29/21.
//

#include "dog.h"

Dog::Dog() : Pet("", 0){
	breed = "";
}

Dog::Dog(std::string name, int weight, std::string breed) : Pet(name, weight){
	this->breed = breed;
}

void Dog::setBreed(std::string breed) {
	this->breed = breed;
}

std::string Dog::getBreed() {
	return breed;
}

std::string Dog::getLifespan() {
	if (weight > 100)
		return "approximately 7 years";
	
	return "approximately 13 years";
}
