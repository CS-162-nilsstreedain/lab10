//
//  pet.cpp
//  Lab 10
//
//  Created by Nils Streedain on 11/29/21.
//

#include "pet.h"

Pet::Pet() {
	name = "";
	weight = 0;
}

Pet::Pet(std::string name, int weight) {
	this->name = name;
	this->weight = weight;
}

void Pet::setName(std::string name) {
	this->name = name;
}

void Pet::setWeight(int weight) {
	this->weight = weight;
}

std::string Pet::getName() {
	return name;
}

int Pet::getWeight() {
	return weight;
}
std::string Pet::getLifespan() {
	return "unknown lifespan";
}
