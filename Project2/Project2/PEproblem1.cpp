#include <iostream>
#include <vector>
using namespace std;

// If we list all the natural numbers below 10 that are multpiles of 3 or 5, we get 3,5,6, and 9
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.



int PE1main()
{
	int n = 10;  // then change to 1000 to solve projectEuler problem
	vector<int> multiples;

	for (int i = 1; i < n; i++)
	{
		if ( i % 3 == 0 )
		{
			multiples.push_back( i );
			cout << i << " added to your vector.\n";
		}
		else if ( i % 5 == 0 )
		{
			multiples.push_back( i );
			cout << i << " added to your vector.\n";
		}
	}
	
	int sum1 = 0;
	int m = multiples.size();
	for (int i=0; i < m; i++)
		sum1 += multiples[i];

	cout << "The sum of all the multiples of 3 and 5 less than " << n << " is " << sum1 << ".\n\n";



	int sum2 = 0;
	for (int i = 1; i < n; i++)
	{
		if ( i % 3 == 0 )
			sum2 += i;
		else if ( i % 5 == 0 )
			sum2 += i;
	}

	cout << "The sum of all the multiples of 3 and 5 less than " << n << " is " << sum2 << ".\n\n";






	cin.get();
	cin.get();
	return 0;
}