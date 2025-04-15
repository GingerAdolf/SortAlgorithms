#include <iostream>
using namespace std;

#include "DataCreation.h"
#include "BubbleSort.h"

int main() {
	

	DataCreation data(100, 1, 100);
	data.print();
	
	BubbleSort bubbleSort(data.getData(), data.getLenght());
	bubbleSort.sort();
	cout << bubbleSort.getTime() << endl;

	DataCreation dataResult(bubbleSort.getLenght(), bubbleSort.getMass());
	dataResult.print();


	



	return 0;
}