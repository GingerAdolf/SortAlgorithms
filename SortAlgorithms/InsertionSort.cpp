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
	for (int i = 1; i < this->lenght; i++) {
		int key = this->mass[i];
		int j = i - 1;
		while (j >= 0 && this->mass[j] > key) {
			this->mass[j + 1] = this->mass[j];
			j = j - 1;
		}
		mass[j + 1] = key;
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

