// Nate Williams
// HW05
// 3/31/16

using namespace std;
#include <iostream>

int* alloc_array(int);

int main() {
	cout << "Please input the size of the array:\n";
	int size = 0, sum = 0, counter = 0;
	double ave = 0;
	cin >> size;

	int* array = alloc_array(size); //calls the function alloc_array to dynamically allocate the proper size

	for (int i = 0; i < size; i++) { //computes the sum of all of the numbers that the user inputs
		sum += array[i];
	}
	ave = sum / size; // computes the average
	for (int i = 0; i < size; i++) {
		if (array[i] > ave)
			counter++;
	}

	cout << "\n" << counter << " of the numbers that were input are larger than the average\nwhich is " << ave << ".";
	delete[] array; // no zombie apocalypses today!
}

int * alloc_array(int size) {
	int* pintarray = new int[size];
	cout << "Enter the numbers for the array:\n";
	for (int i = 0; i < size; i++) {
		cout << "Enter number:  ";
		cin >> pintarray[i];
	}

	return pintarray;
}