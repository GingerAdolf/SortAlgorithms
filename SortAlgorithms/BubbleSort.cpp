#include "BubbleSort.h"
#include <iostream>


void BubbleSort::swap(int index1, int index2)
{
	int a = this->mass[index1];
	this->mass[index1] = this->mass[index2];
	this->mass[index2] = a;
}

BubbleSort::BubbleSort(const int* mass, const int lenght)
{
	this->lenght = lenght;
	this->mass = new int[lenght] {0};
	for (int i = 0; i < this->lenght; i++) {
		this->mass[i] = mass[i];
	}
	
}

void BubbleSort::sort()
{
	bool flag = false;
	
	while (!flag) {
		for (int i = 0; i < this->lenght - 1; i++) {
			if (mass[i] > mass[i + 1]) {
				swap(i, i + 1);
			}
		}
		for (int i = 0; i < this->lenght - 1; i++) {
			if (mass[i] > mass[i + 1]) {
				flag = false;
				break;
			}
			flag = true;
		}
		
	}
}

int* BubbleSort::getMass() const
{
	return this->mass;
}

int BubbleSort::getLenght() const
{
	return this->lenght;
}


BubbleSort::~BubbleSort()
{
	delete[] this->mass;
	this->lenght = 0;
}
