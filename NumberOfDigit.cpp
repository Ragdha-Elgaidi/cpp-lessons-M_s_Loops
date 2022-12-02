/*
Num, the input, was divided till be zero.
So we lost its original value!
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
	else 
	{
		while (num != 0) 
		{
			digits += 1;
			num = num / 10;
		}
	}
	cout << "Number of digits of " << tem_num << " is " << digits;
	return 0;
}

/*
 * Observe this code is also valid and it doesn't annoy us about -ve values
 * It totally correct in C++
 * But it will faill in other languages like python
 * C++ integer division truncates to 0, but python floor
 *
 * C++   : -1/10 => 0
 * Python: -1/10 => -1
 *
 * Be careful from -ve values with division and modulus
 */
