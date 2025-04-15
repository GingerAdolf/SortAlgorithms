#include <iostream>
using namespace std;

#include "DataCreation.h"
#include "BubbleSort.h"

int main() {
	

	DataCreation data(10, 1, 10);
	data.print();
	
	BubbleSort bubbleSort(data.getData(), data.getLenght());
	bubbleSort.sort();

	DataCreation dataResult(bubbleSort.getLenght(), bubbleSort.getMass());
	dataResult.print();

	



	return 0;
}