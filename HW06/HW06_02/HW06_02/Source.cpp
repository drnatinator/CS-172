#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isSorted(const T list[], int size) {
	bool checkSorted = true;
	for (int i = 0; (i + 1) < size; i++) {
		if (list[i] > list[i + 1])
			checkSorted = false;
	}
	
	return checkSorted;
}

int main() {
	int intTest[] = { 1,2,3,4,5,6,7,8 };
	double doubleTest[] = { .1,.2,.3,.4,.5,.6,.7,.8 };
	string stringTest = "abcdefgh";
	char cvtString[8];
	for (int i = 0; i < 8; i++)
		cvtString[i] = stringTest[i];
	cout << "Int array:  " << isSorted(intTest, 8)<< endl;
	cout << "Double array:   "<< isSorted(doubleTest, 8)<< endl;
	cout << "String:   " << isSorted(cvtString, 8)<< endl;
	return 0;
}





