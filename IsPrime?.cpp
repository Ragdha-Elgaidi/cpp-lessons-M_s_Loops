/*
Read an integer N (< 500) and print YES if it is prime, otherwise NO
○ A prime number is greater than 1 AND cannot be formed by multiplying two smaller numbers.
■ In other words, number%whatever != 0
■ The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
*/

#include<iostream>
using namespace std;

int main() 
{
	int number;

	cin >> number;

	if (number <= 1)
		cout << "NO\n";
	else 
	{
		bool is_ok = true;

		for (int i = 2; i < number; ++i)
		{
			if (number % i == 0) 
			{
				is_ok = false;
				break;
			}
		}

		if (is_ok)
			cout << "YES";
		else
			cout << "NO";
	}

	return 0;
}
