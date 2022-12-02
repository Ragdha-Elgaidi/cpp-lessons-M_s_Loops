/*
How could -num be wrong?
● We said last time integer limits are:
○ -2147483648 to 2147483647
● If we did -num on the max number it
become: 2147483648
○ But this is > 2147483647 ⇒ Overflow
○ Solution: Special case handling
● We wanted to change output message
as line 23. What is wrong?
*/
#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int tem_num = num;
	int digits = 0;

	if (num == 0)
		digits = 1;
	else if (num == -2147483648)
		digits = 10;
	else 
	{
		if (num < 0)
			num = -num;

		while (num > 0)
		{
			digits += 1;
			num = num / 10;
		}
	}
	cout << "Numbers of digits of " << tem_num << " is " << digits;
	return 0;
}
