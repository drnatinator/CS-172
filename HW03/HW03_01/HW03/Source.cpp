//Author: Nate Williams
//Date: 3/14/16
//Project: HW03_01

using namespace std;
#include <iostream>
#include <stack>
#include <string>

void isPalindrome();

int main() {
	isPalindrome();
	return 0;
}

void isPalindrome() {
	string input, output;
	int size;

	cout << "please input a string:   "; //prompts user for a string
	cin >> input;
	cout << endl;
	size = input.length(); //finds the length of the string, used in he loops below
	stack<char> invert;

	for (int i = 0; i < size; i++) {
		input[i] = tolower(input[i]); //converts the string to lowercase, making the program case-insensitive
		invert.push(input[i]); //puts each character into a stack, one at a time
	}
	for (int i = 0; i < size; i++) {
		output += invert.top(); //pulls the characters out of the stack, one at a time, inverting the string
		invert.pop(); //deletes the top character on the stack, allowing the loops to access the one below it
	}
	if (input == output) // checks to see if the input string, changed to lowercase is the same as the inverted one
		cout << "The input is a palindrome!\n";
	else
		cout << "The input is not a palindrome. :(\n";

}


