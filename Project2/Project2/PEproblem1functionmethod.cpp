#include <iostream>
#include <vector>
using namespace std;

// If we list all the natural numbers below 10 that are multpiles of 3 or 5, we get 3,5,6, and 9
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.



int MultipleSum( int n, vector<int> factors)
{
	vector<int> multiples;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < factors.size(); j++)
		{
			if ( i % factors[j] == 0 )
			{	
				multiples.push_back( i );
				cout << i << " added to your vector.\n";
				break;	// breaks out of this loop once it finds out its a multiple
			}
		}
	}
	
	int sum = 0;
	int m = multiples.size();
	for (int i=0; i < m; i++)
		sum += multiples[i];


	return sum;
}

int main()
{

	int n = 10;
	vector<int> factors;
	factors.push_back(3);
	factors.push_back(5);	// you could put whatever you wanted here, or add more factors...
	int sum;


	cout << "Now using the function method.\n\n";
	sum = MultipleSum(n,factors);
	cout << "The sum of all the multiples of 3 and 5 less than " << n << " is " << sum << ".\n\n";


	cin.get();
	cin.get();
	return 0;
}