/*
Read three numbers N, A, B. Print the summation of the numbers between 1
and N whose sum of digits is between A and B.
● Input / Output
○ 20 2 5 ⇒ 84
■ Numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14, 20.
● E.g. digits sum of 13 is 4 : which is between (2, 5)
*/

#include<iostream>
using namespace std;

int main() 
{
	int n, a, b, total = 0;

	cin >> n >> a >> b;

	for (int i = 1; i <= n; ++i) 
	{
		int tmp = i;	// be careful - take copy
		int digits_sum = 0;

		while (tmp)
		{
			digits_sum += tmp % 10;
			tmp /= 10;
		}

		if (a <= digits_sum && digits_sum <= b)
			total += i;
	}
	cout << total << "\n";

	return 0;
}
