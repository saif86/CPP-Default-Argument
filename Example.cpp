/**
* @file Example2.cpp
*
* @brief C++ Program to demonstrate working of default argument.
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

// FUNCTION PROTOTYPE (DECLARATION)

/** function that prints a character multiple times.
*
* @param c The input character to be printed.
* @param n The no. of times to be printed.
*
* @return void.
*/
void display(char = '*', int = 1);


// function main begins program execution
int main() {
	cout << "No argument passed:\n";
	display();

	cout << "\n\nFirst argument passed:\n";
	display('#');

	cout << "\n\nBoth argument passed:\n";
	display('$', 5);

	system("pause");
	return 0;
}
// end main 

// FUNCTION DEFINITION

// function that displays the input character desired no. of times
void display(char c, int n) {
	for (int i = 1; i <= n; ++i) {
		cout << c;
	}
	cout << endl;
}
// end function display

