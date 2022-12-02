/*
Read integer N,
then print a face down left angled triangle that has N rows
*/
#include<iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;
	
	int row = N;
	while (row >= 1)
	{
		int startcount = row;
		while (startcount >= 1)
		{
			cout << "*";
			startcount--;
		}
		cout << "\n";
		row--;
	}
	return 0;
}
