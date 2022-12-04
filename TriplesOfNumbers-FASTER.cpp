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
			int C = A + B;
			if (1 <= C && C <= W)
			{
				count += W - C + 1;
			}
		}
	}
	cout << count << endl;
	return 0;
}
