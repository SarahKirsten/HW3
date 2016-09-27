/////////////////////////
//Program Name: EX03_03
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/27/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

class EvenNumber
{
private:

public:
	int value;
	int previous;
	int next;

	EvenNumber()
	{
		value = 0;
	}

	EvenNumber(int x)//allows for changing value to another number
	{
		value = x;
	}

	int getValue()
	{
		return value;
	}

	int getPrevious()
	{
		previous = value - 2;//gets previous even number
		return previous;//returns that number
	}

	int getNext()
	{
		next = value + 2;//gets next even number
		return next;//returns that number
	}


};



#pragma once
