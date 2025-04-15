#pragma once
class BubbleSort
{
private:
	int* mass = nullptr;
	int lenght;
	double time = 0;
	void swap(int index1, int index2);

public:
	BubbleSort(const int* mass, const int lenght);

	void sort();
	
	int* getMass() const;
	int getLenght() const;


	~BubbleSort();
	
};

