// C++ program to find sum of harmonic series
#include<bits/stdc++.h>
using namespace std;

// Function to return sum of harmonic series
double sum(int n)
{
double i, s = 0.0;
for(i = 1; i <= n; i++)
	s = s + 1 / i;
	
return s;
}

// Driver code
int main()
{
	int n = 5;
	
	cout << "Sum is " << sum(n);
	return 0;
}

// This code is contributed by SHUBHAMSINGH10

