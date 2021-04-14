/* C++ program to find the sum of all numbers present in the string */
#include <bits/stdc++.h>
using namespace std;
// Function to find the sum of all  numbers present in the string
int calculate_sum(string str)
{
	string temp = ""; 
	int sum = 0;
	for (char ch: str)
	{
		if (isdigit(ch)) 
			temp += ch;
		else
		{
			sum += atoi(temp.c_str());  // add it with sum, c_str() is a builtin function in C++ which returns a pointer to an array 
			temp = "";
		}
	}
	return sum + atoi(temp.c_str());  // return the sum
}
int main()
{
	string str;
	cin >> str;  
	cout << calculate_sum(str);
	return 0;
}
