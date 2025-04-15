#include "InsertionSort.h"
#include <iostream>
#include <time.h>

void InsertionSort::swap(int index1, int index2)
{
	int a = this->mass[index1];
	this->mass[index1] = this->mass[index2];
	this->mass[index2] = a;
}

InsertionSort::InsertionSort(const int* mass, const int lenght)
{
	this->lenght = lenght;
	this->mass = new int[lenght];
	for (int i = 0; i < lenght; i++) {
		this->mass[i] = mass[i];
	}
}

void InsertionSort::sort()
{
	if (this->mass[1] < this->mass[0]) {
		swap(0, 1);
	}
	for (int i = 1; i < this->lenght; i++) {
		
	}
}

int* InsertionSort::getMass() const
{
	return this->mass;
}

int InsertionSort::getLenght() const
{
	return this->lenght;
}

double InsertionSort::getTime() const
{
	return this->time;
}


InsertionSort::~InsertionSort()
{
	delete[] this->mass;
	this->lenght = 0;
}

