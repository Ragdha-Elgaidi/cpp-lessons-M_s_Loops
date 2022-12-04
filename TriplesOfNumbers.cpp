/*
Read N, M, W. Find all triples that has
A + B <= C where
○ 1 <= A <= N
○ A <= B <= M
○ 1 <= C <= W
*/
#include<iostream>
using namespace std;

int main()
{
	int N, M, W;

	cin >> N >> M >> W;
	int count=0;
	for (int A = 1; A <= N; ++A)
	{
		for (int B = A; B <= M; ++B)
		{
			for (int C = 1; C <= W; ++C)
			{
				if (A+B<= C)
					count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
