/*
A popular math sequence
○ First 2 numbers: 0 1
○ Then each number is sum of last 2 numbers:
■ 0 1 1 2 3 5 8 13 21 34
● E.g. 13 = 5 + 8
● E.g. 34 = 13+21
*/

#include<iostream>
using namespace std;

int main() 
{
	int n = 10;

	int a = 0, b = 1;

	cout << a << " " << b << " ";

	for (int a = 0, b = 1, cnt = 2; cnt < n; ++cnt) 
	{
		int c = a + b;
		a = b;
		b = c;

		cout << c << " ";
	}

	return 0;
}
