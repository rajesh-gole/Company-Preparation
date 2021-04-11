// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
	return ((a *b)/ gcd(a, b));
}

// Driver program to test above function
int main()
{
	int a = 15, b = 20;
	cout <<"LCM of " << a << " and "
		<< b << " is " << lcm(a, b);
	return 0;
}// C++ program to find LCM of n elements
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ll findlcm(int arr[], int n)
{
	ll ans = arr[0];

	for (int i = 1; i < n; i++)
		ans = (((arr[i] * ans)) /
				(gcd(arr[i], ans)));

	return ans;
}


int main()
{
	int arr[] = { 2, 7, 3, 9, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%lld", findlcm(arr, n));
	return 0;
}

