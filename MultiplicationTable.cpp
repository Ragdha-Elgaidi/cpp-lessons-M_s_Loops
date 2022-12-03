/*
Read an integer N and M, then print NxM lines for their multiplication table.
Input 3 4
● Output
○ 1 x 1 = 1
○ 1 x 2 = 2
○ 1 x 3 = 3
○ 1 x 4 = 4
○ 2 x 1 = 2
○ 2 x 2 = 4
○ 2 x 3 = 6
○ 2 x 4 = 8
○ 3 x 1 = 3
○ 3 x 2 = 6
○ 3 x 3 = 9
○ 3 x 4 = 12
*/

#include<iostream>
using namespace std;

int main() 
{
	int n, m;

	cin >> n >> m;

	int cnt_n = 1;

	while (cnt_n <= n) {
		int cnt_m = 1;

		while (cnt_m <= m)
		{
			cout << cnt_n << " x " << cnt_m << " = " << cnt_n * cnt_m << "\n";
			cnt_m++;
		}
		cnt_n++;
	}

	return 0;
}
