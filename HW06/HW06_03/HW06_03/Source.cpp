//Nate Williams
// 4/21
// HW06_03

#include <iostream>
#include "vector.cpp"
using namespace std;


int main()
{
	int size;
	Vector<int> test1(8,1); //creates a vector for ints
	size = test1.size();
	cout << "size is: "<< size<<endl; //prints the sixe of the vector to the screen
	for (int i = 0; i < size; i++) {
		cout << test1.at(i) << endl; //prints the value stored in each slot to the sceen
	}
	cout << endl << endl;
	Vector<double> test2(5, 1.1); //creates a vector for doubles
	size = test2.size();
	cout << "size is: " << size << endl; //prints the size of the vector to the screen
	for (int i = 0; i < size; i++) {
		cout << test2.at(i) << endl; //prints the value stored in each slot to the screen
	}
}