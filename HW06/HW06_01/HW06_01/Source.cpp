// Nate Wiliams
// HW06
// 4/14/2016

#include <iostream>
using namespace std;

template <typename T>
int LinearSearch(const T[], T, int);

int main()
{
	int testInt[8] = { 1,2,3,4,5,6,7,8 }, intKey = 5;
	double testDouble[10] = { .1,.2,.3,.4,.5,.6,.7,.8,.9,1.0 }, doubleKey = .2;
	string testString = "Testing...";
	char charString[10], charKey = 'i';
	for (int i = 0; i < 10; i++) {
		charString[i] = testString[i];
	}
	cout << "For testInt, 5 is in slot: " << LinearSearch(testInt, intKey, 8) << endl;
	cout << "For testDouble, .2 is in slot: " << LinearSearch(testDouble, doubleKey, 10) << endl;
	cout << "For testString, i is in slot: " << LinearSearch(charString, charKey, 10) << endl;
}

template <typename T>
int LinearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}