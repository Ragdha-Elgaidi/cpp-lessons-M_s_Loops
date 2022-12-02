/*
Input: Read an integer N followed by a single character
● Output: Print the character N times as below
5 Y ⇒ YYYYY
○ 3 # ⇒ ###
*/
#include<iostream>
using namespace std;

int main()
{
	int num;
	char ch;

	cin >> num >> ch;

	while (num > 0)
	{
		cout << ch;
		num--;
	}

	return 0;
}
