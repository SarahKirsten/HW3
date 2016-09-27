/////////////////////////
//Program Name: EX03_03
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/27/2016
///////////////////////

/*Liang Programming Exercise 9.11: the EvenNumber class*/
#include "Header.h"

int main()
{
	EvenNumber value1(16);
	value1.getValue();//get value for value1
	value1.getPrevious();//get previous for value1
	value1.getNext();//get next for value1

	cout << "Current number: " << value1.getValue() << endl;
	cout << "Previous even number: " << value1.getPrevious() << endl;
	cout << "Next Even number after current number: " << value1.getNext() << endl;


	return 0;
}
