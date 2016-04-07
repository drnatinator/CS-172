//Nate Williams
//EX05_03
//4/6/2016

using namespace std;
#include <iostream>

int findSmallest(int*, int);

int main()
{
	cout << "enter an integer for the size of the array:  "; //prompt user for the number of integers that the array will contain
	int size;
	cin >> size;
		
	int* pArray = new int[size]; //dynamically allocates an array of the desired size

	for (int i = 0; i < size;i++) { //takes the input to populate the array
		cout << "Enter number:  ";
		cin >> pArray[i];
	}
	cout << "The smallest number entered is: ";
	int smallest = findSmallest(pArray, size); //calls findSmallest to find the smallest number input
	cout << smallest<<endl;
	delete[] pArray; //not today, zombie apocalpse!
	return 0;
}

int findSmallest(int* input, int size) {
	int possSmall = input[0]; //sets the possible smallest number to the first slot in the array
	for (int i = 1;i < size;i++) { //starts at [1] because [0] is used above as the default
		if (input[i] < possSmall) //compares the smallest number so far with the next one in the array, one at a time
			possSmall = input[i]; // if the new number is smaller, its value replaces that in PossSmall
	}
	return possSmall; //return the smallest value in the array to main()
}