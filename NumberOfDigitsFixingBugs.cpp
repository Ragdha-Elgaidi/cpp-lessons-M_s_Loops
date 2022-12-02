/*
Our previous code will fail for negative numbers
● E.g. if we feed -123, the condition fails!
● Simple trick: if it is negative, multiply by -1
● Works well!
*/
#include<iostream>
using namespace std;

int main() 
{
	int num;
	cin >> num;

	int digits = 0;

	if (num == 0)
		digits = 1;
	
	else {
		if (num < 0)
			num = -num;

		while (num > 0) 
		{
			digits += 1;
			num = num / 10;
		}
	}
	cout << "# Number of digits of " << num << " is " << digits;
	return 0;
}
