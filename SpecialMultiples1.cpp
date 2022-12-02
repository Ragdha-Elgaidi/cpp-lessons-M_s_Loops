/*
Read an integer N : print all numbers that satisfy the following property
○ Either number is divisible by 8
○ Or divisible by both 4 and 3
*/
#include<iostream>
using namespace std;

int main() {
	int N, result = 0;

	cin >> N;

	int cnt = 0;

	while (cnt <= N)
	{
		if (cnt % 8 == 0 || cnt % 3 == 0 && cnt % 4 == 0)
			cout << cnt << " ";

		cnt++;
	}
	return 0;
}
