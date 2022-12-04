/*
Count How many X, Y numbers such that
○ X in range [50-300]
○ Y in range [70-400]
○ X < Y
○ (X+Y) divisible by 7
*/
#include<iostream>
using namespace std;

int main()
{
	int count=0;
	for (int X = 50; X <= 300; X++)
	{
		for (int Y = 70; Y <= 400; Y++)
		{
			while (X < Y && (X + Y) % 7 == 0)
				count++;
		}
	}
	return 0;
}
