//
//  dog.h
//  Lab 10
//
//  Created by Nils Streedain on 11/29/21.
//

#ifndef dog_h
#define dog_h

#include <iostream>
#include "pet.h"

class Dog : public Pet {
private:
	std::string breed;
public:
	Dog();
	Dog(std::string, int, std::string);
	
	void setBreed(std::string);
	std::string getBreed();
	
	std::string getLifespan();
};

#endif /* dog_h */
