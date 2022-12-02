/*
Read an integer N (1 <= 30): Print the first N numbers that are
○ multiple of 3 but not multiple of 4
*/
#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	if (N >= 1 && N <= 30)
	{
		int counter = 0;
		int count = 0;
		while (count<N)
		{
			if (counter % 3 == 0 && counter % 4 != 0)
			{
				cout << counter << " ";
				count++;
			}
			counter++;
			
		}
		
	}
	else
		cout << "enter the numbers in the range of 1:30" << endl;
	return  0;
}
