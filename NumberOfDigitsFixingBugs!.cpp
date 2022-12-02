/*
Our first bug is: the previous code fails for input 0
○ The loop won’t be accessed as num > 0 condition
● Solution:
○ Special if condition for this special case
*/

#include <iostream>
using namespace std;

int main() 
{
	int num;
	cin >> num;

	int digits = 0;

	if (num == 0)
		digits = 1;
	else 
	{
		while (num > 0)
		{
			digits += 1;
			num = num / 10;
		}
	}
	cout << digits;
	return 0;
}
