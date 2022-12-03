/*
ead integer T for number of test cases.
● For each test case read integer N. Then read N integers a, b, c
● Output: Compute the sum of the following expression:
○ a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
■ That is the k-th number is repeated k times
*/
#include<iostream>
using namespace std;

int main() 
{
	int T;

	cin >> T;

	/**
	 * We need 3 nested loops
	 * loop over test cases
	 * 	loop over reading numbers
	 * 	  loop to repeat the number K times (multiplication)
	 */

	while (T > 0)
	
	{
		int N;
		cin >> N;

		int cnt_N = 1;
		int sum = 0;
		while (cnt_N <= N) 
		{
			int value = 0;
			cin >> value;

			int cnt_deep = cnt_N;
			int result = 1;

			while (cnt_deep > 0)
			{
				result *= value;
				cnt_deep--;
			}
			sum += result;
			cnt_N++;
		}
		cout << sum << "\n";
		T--;
	}
	
	//Using for loop
	int N, T, value;

	cin >> T;

	while (T--) 
	{
		cin >> N;

		int sum = 0;
		for (int i = 0; i < N; ++i)
		{
			cin >> value;

			int result = 1;
			for (int j = 0; j < i + 1; ++j)
				result *= value;
			sum += result;
		}
		cout << sum << "\n";
	}
	return 0;
}
