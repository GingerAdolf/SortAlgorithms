#include <iostream>
using namespace std;

#include "DataCreation.h"
#include "BubbleSort.h"
#include "InsertionSort.h"

int main() {
	

	DataCreation data(10, 1, 10);
	data.print();
	
	BubbleSort bubbleSort(data.getData(), data.getLenght());
	bubbleSort.sort();
	cout << bubbleSort.getTime() << endl;

	DataCreation dataResultBubble(bubbleSort.getLenght(), bubbleSort.getMass());
	dataResultBubble.print();

	InsertionSort insertionSort(data.getData(), data.getLenght());
	insertionSort.sort();

	DataCreation dataResultIncert(insertionSort.getLenght(), insertionSort.getMass());
	dataResultIncert.print();



	return 0;
}