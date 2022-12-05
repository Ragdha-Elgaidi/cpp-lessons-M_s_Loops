/*
Read integer N (<500), then print all prime numbers <= N
○ Output should be comma separated, as below
Input ⇒ Output
○ 18 ⇒ 2,3,5,7,11,13,17
■ No comma after last number!
*/

#include<iostream>
using namespace std;

int main()
{
	int target;
	bool first_print = true;

	cin >> target;

	for (int number = 2; number <= target; ++number)
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
		{
			if (!first_print)
				cout << ",";

			cout << number;

			first_print = false;
		}
	}

	return 0;
}
