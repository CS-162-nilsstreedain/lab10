//
//  pet.h
//  Lab 10
//
//  Created by Nils Streedain on 11/29/21.
//

#ifndef pet_h
#define pet_h

#include <iostream>

class Pet {
protected:
	std::string name;
	int weight;
public:
	Pet();
	Pet(std::string, int);
	
	void setName(std::string);
	void setWeight(int);
	
	std::string getName();
	int getWeight();
	
	std::string getLifespan();
};

#endif /* pet_h */
