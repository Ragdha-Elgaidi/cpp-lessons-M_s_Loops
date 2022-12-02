/*
Input: Read integer T for a number of test cases.
● For each test case read integer N followed by reading N integers.
● Output: For each test case, print the minimum of the N integers
● Input
○ 2 6 10 50 20 70 30 4 3 10 5 30
○ Notice here we have 2 test cases
■ 6 10 50 20 70 30 4 [6 numbers to read] ⇒ min is 4
■ 3 10 5 30
● Output
○ 4
○ 5
*/

#include<iostream>
using namespace std;

int main() 
{
	int T;

	cin >> T;

	while (T > 0) {
		int N;
		cin >> N;

		int pos = 0;
		int result;

		while (pos < N) 
		{
			int value;
			cin >> value;

			if (pos == 0)
				result = value;
			else if (result > value)
				result = value;

			pos++;
		}
		cout << result << "\n";
		--T;
	}

	return 0;
}
