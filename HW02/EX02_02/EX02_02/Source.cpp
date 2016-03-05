// Nate Williams
// 2/23/16
// HW02
// 9.6

using namespace std;
#include <iostream>

class QuadraticEquation
{
public:
	double a; //initialize the variables for the object
	double b;
	double c;
	double discriminent;
	double root1, root2;

	QuadraticEquation(double newA, double newB, double newC) { //consrtructor
		a = newA;
		b = newB;
		c = newC;
	}
																								//Derek - you need to have three geter functions for a,b, and c
	double getDiscriminent() {
		return discriminent = (b*b) - (4 * a*c);
	}
	double getRoot1() {
		return root1 = (-b + (sqrt(discriminent))) / (2 * a);
		}
	double getRoot2() {
		return root2 = (-b - (sqrt(discriminent))) / (2 * a);
	}

};

int main() {
	double newA=0, newB=0, newC=0, discriminent=0; //initialize the variables
	cout << "Please enter values for the coefficients a, b, and c:\n"; //prompt for the user's input for the coefficients of the quadratic
	cin >> newA >> newB >> newC;
	QuadraticEquation Q1(newA, newB, newC);
	
	Q1.getDiscriminent(); //runs the getDiscriminent function (needed so that the next line executes properly
	discriminent = Q1.getDiscriminent(); // assigns the value of the discriminent to a variable in main()
	if (discriminent > 0)
		cout << "The roots of the equation are as follows:\n" << Q1.getRoot1() << endl << Q1.getRoot2(); //gets the roots of the quadratic
	else if (discriminent < 0)
		cout << "There are no real roots for this equation\n";
	else
		cout << "The root of the equation is:\n" << Q1.getRoot1();
	

	int wierdpause;
	cin >> wierdpause; //for some reason, the console simply runs the program and exits immediately; this fixes it.
}