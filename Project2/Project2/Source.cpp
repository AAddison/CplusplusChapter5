#include <iostream>

using namespace std;

// List Function prototypes
int addition(int a, int b);


// Or, include entire function above your "main" function
void printmessage()
{
	cout << "I'm a function!";
}


int Chap5main()  // main is a function that takes no inputs and returns an int, it returns 0 which is specified at the bottom
{
	// use addition function
	int a = 5;
	int b = 3;
	int z;
	z = addition(a,b);

	// call printmessage function
	printmessage();


	cin.get();
	cin.get();
	return 0;
}



int addition(int a, int b)
{
	int r = a+b;
	cout << "The sum of " << a << " and " << b << " is " << r << ".\n";
	return(r);
}