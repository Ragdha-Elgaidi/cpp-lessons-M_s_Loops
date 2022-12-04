/*
Read an Integer N, then print an X using * as following
○ N always odd
*/

#include<iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;
	if (n % 2 != 0)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (i == j || n - i - 1 == j)
					cout << "*";
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
