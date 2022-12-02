/*
Read integer N, followed by reading N numbers. Print 2 values
○ The average of the numbers in odd positions (1st, 3rd, 5th, …)
○ The average of the numbers in even positions (2nd, 4th, 6th, …)
*/
#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int counter = 1;
	double sum_odd = 0;
	double sum_even = 0;
	int odd_counter = 0, even_counter = 0;
	int Number = 0;

	while (counter <= N)
	{
		cin >> Number;
		if (counter % 2 == 0)
		{
			sum_even += Number;
			even_counter++;
		}
		else
		{
			sum_odd += Number;
			odd_counter++;
		}
		counter++;
	}
	cout << sum_even/even_counter << " " << sum_odd/odd_counter << endl;
	return 0;
}
