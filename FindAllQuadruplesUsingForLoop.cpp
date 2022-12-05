/*
Count how many (a, b, c, d) with following property:
○ 1 <= a, b, c, d <= 200
○ a + b = c + d
● Code it once using 4 loops
○ How much time does it take!
● Code it once using 3 loops only
● Future: With hash tables, you can do it using 2 loops only
*/
#include<iostream>
using namespace std;

int main() 
{
	int count = 0;

	for (int a = 1; a <= 200; ++a) 
	{
		for (int b = 1; b <= 200; ++b)
		{
			for (int c = 1; c <= 200; ++c)
			{
				for (int d = 1; d <= 200; ++d)
					count += (a + b == c + d);
			}
		}
	}

	cout << count << "\n";

	return 0;
}
