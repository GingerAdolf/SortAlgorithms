#pragma once
class BubbleSort
{
private:
	int* mass = nullptr;
	int linght;
	void swap(int index1, int index2);

public:
	BubbleSort(const int* mass, const int lenght);

	void sort();
	
};

