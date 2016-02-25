// Nate Williams
// 2/23/16
// HW02
// 9.11

using namespace std;
#include <iostream>

class EvenNumber
{
private: //so people can't mess with the value
	int value;

public:
	EvenNumber() { //initializes the value to zero
		value = 0;
	}
	EvenNumber(int i) //allows main() to change value
	{
		value = i;
	}
	int getValue() { //returns value to main()
		return value;
	}
	int getNext() { //finds the next higher even number from value and returns it to main()
		if (value % 2 == 0) //determines whether value is even or odd, then adds either 1 or 2, depending
			return (value + 2);
		else
			return (value + 1);
	}
	int getPrevious() { //finds the next lower even number from value and returns it
		if (value % 2 == 0) //determines whether value is even or odd, then subtracts either 1 or 2, depending
			return (value - 2);
		else
			return (value - 1);
	}
};

int main() {
	cout << "Please input an integer:\n";
	int input;
	cin >> input;
	EvenNumber EvenNumber(input); //makes the variable value in the object equal to the user's input
	
	cout << "The input was " << EvenNumber.getValue() << ", the even number above it is " << EvenNumber.getNext() << ", and the even number below it is " << EvenNumber.getPrevious() << ".";

	int wierdpause; // keeps the console from just excecuting the program and closing out immediately, which it does for some reason...
	cin >> wierdpause;
}