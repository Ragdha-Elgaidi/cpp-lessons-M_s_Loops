/*
Read N, M, SUM. Find all pairs that has
A + B == SUM where
○ 1 <= A <= N
○ 1 <= B <= M
*/

#include<iostream>
using namespace std;

int main() 
{
	int n, m, sum;

	cin >> n >> m >> sum;

	int cnt = 0;

	for (int i = 1; i <= n; ++i)
	{
		int j = sum - i;	// i + j == sum

		if (1 <= j && j <= m)
		{
			cnt++;
			cout << i <<" " << j << endl;
		}
	}

	cout << cnt << "\n";

	return 0;
}
