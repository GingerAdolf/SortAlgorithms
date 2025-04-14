#include "DataCreation.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
int* DataCreation::randomMass(int lenght, int min, int max)
{
	srand(time(NULL));
	int* mass = new int[lenght];
	for (int i = 0; i < lenght; i++) {
		mass[i] = rand() % (max - min + 1) + min;
	}

	return mass;
}

DataCreation::DataCreation(int lenght)
{
	this->lenght = lenght;
	this->data = new int[lenght];
	this->data = randomMass(lenght, 0, 1);
}

DataCreation::DataCreation(int lenght, int min, int max)
{
	this->lenght = lenght;
	this->data = new int[lenght];
	this->data = randomMass(lenght, min, max);
}

int DataCreation::getLenght() const
{
	return this->lenght;
}

int* DataCreation::getData() const 
{
	return this->data;
}

void DataCreation::print()
{
	for (int i = 0; i < this->lenght; i++) {
		std::cout << this->data[i] << " ";
	}
	std::cout << std::endl;
}

