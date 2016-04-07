// Nate Williams
// HW05_02
// 4/6/2016


#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	int testArray[4]; //initial array, containing four slots
	int size = 4;
	for (int i = 0;i < size;i++) { //initializes the four slots to 1, 2, 3, and 4
		testArray[i] = i + 1;
	}
	const int* ptestArray = testArray; //initializes the const pointer to the test array
	
	cout << "The array starts out containing:\n"; //verifies that the test array has been initialized to {1,2,3,4}
	for (int i = 0;i < size;i++) {
		cout << ptestArray[i] << endl;
	}
	
	int* pnewArray = doubleCapacity(ptestArray, size); //calls the doubleCapacity function
	size += size;
	cout << "\nThe array now contains:\n"; //verifies that the array has been doubled in size
	for (int i = 0;i < size;i++) {
		cout << pnewArray[i] << endl;
	}
}

int* doubleCapacity(const int* list, int size) {
	int* temp = new int[2*size]; //pointer initialized to an array twice as large as the original
	for (int i = 0;i < size;i++) { //sets the first half (the old part) of the array to what it should be
		temp[i] = list[i];
	}
	for (int i = size;i < 2 * size;i++) { //fills in the second half (the new part) of the array
		temp[i] = i+1;
	}
	return temp; //returns the pointer to the new, larger array
}