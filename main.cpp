#include "q1.hpp"

// Do not change this file.
// Use q1.hpp file to complete the functions swap() and getinput()

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << num1 << " " << num2 << endl;
	swapTwoValues(num1, num2);
	cout << num1 << " " << num2 << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << fixed << setprecision(2);
	cout << fnum1 << " " << fnum2 << endl;
	swapTwoValues(fnum1, fnum2);
	cout << num1 << " " << num2 << endl;
}
