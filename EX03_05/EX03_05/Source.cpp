/////////////////////////
//Program Name: EX03_05
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/22/2016
///////////////////////

/*Liang Programming Exercise 10.10: the MyInteger class*/
#include "Header.h"

int main()
{
	MyInteger n1(5);
	cout << "n1 is even? " << n1.isEven() << endl;
	cout << "n1 is prime? " << n1.isPrime() << endl;
	cout << "n1 is odd? " << n1.isOdd() << endl;
	cout << "\n5 is prime? " << MyInteger::isPrime(5) << endl;


	return 0;
}
