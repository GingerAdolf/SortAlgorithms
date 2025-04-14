#include <iostream>
using namespace std;

#include "DataCreation.h"
#include "BubbleSort.h"

int main() {
	

	DataCreation data(10, 1, 10);
	data.print();
	
	BubbleSort bubbleSort(data.getData(), data.getLenght());
	bubbleSort.sort();
	data.print();



	return 0;
}