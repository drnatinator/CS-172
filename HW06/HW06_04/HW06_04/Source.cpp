//Nate Williams
//  4/21
// HW06_04

#include <iostream>
#include <vector>
#include<ctime>
using namespace std;

template <typename T>
void shuffle(vector<T>&v); //shuffles the contents of a vector into a random order

int main() {
	vector<int> test1;
	for (int i = 0; i < 10; i++) {
		test1.push_back(i+1); //populates vector with numbers increasing from 1 to 10
		cout << test1.at(i) << endl; //prints each slot to the screen (to prove they're in order)
	}
	cout << "\nafter shuffling:\n";
	shuffle(test1); // calls shuffle
	for (int i = 0; i < 10; i++) { 
		cout << test1.at(i) << endl; //prints each slot in the new, shuffled vector to the screen
	}
}

template <typename T>
void shuffle(vector<T>&v) {
	srand(time(0)); //enables the pseudo-random numbers for three lines down
	int size = v.size(); //finds the size of the vector
	
	for (int i = 0; i < size; i++) {
		int randSlot = rand() % size; //picks some random slot in the vector (by taking rand() mod size)
		T temp = v[randSlot]; //
		v[randSlot] = v[i]; // swap function
		v[i] = temp;        //
	}
}

