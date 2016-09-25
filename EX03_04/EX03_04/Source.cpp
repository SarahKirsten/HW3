/////////////////////////
//Program Name: EX03_04
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/22/2016
///////////////////////

/*Liang Programming Exercise 10.4: Sort characters in a string*/
#include "Header.h"

string sort(string &s)
{
	for (int i = s.length() - 1; i >= 1; i--)
	{
		//Find the max in the list [0...i]
		char currentMax = s[0];
		int currentMaxIndex = 0;

		for (int j = 1; j <= i; j++)
		{
			if (currentMax < s[j])
			{
				currentMax = s[j];
				currentMaxIndex = j;
			}
		}

		//Swap list[i] with list[currentMaxIndex] if necessary;
		if (currentMaxIndex != i)
		{
			s[currentMaxIndex] = s[i];
			s[i] = currentMax;
		}
	}

	return s;
}

int main()
{
	//Prompt user to enter a string
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);

	cout << "The sorted string is " << sort(s) << endl << endl;


	return 0;
}
