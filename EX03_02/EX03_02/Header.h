/////////////////////////
//Program Name: EX03_02
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/22/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

class QuadraticEquation
{
private:
	int a;
	int b;
	int c;

public:
	QuadraticEquation(double a, double b, double c)
		: a(a), b(b), c(c)
	{
	}

	double getA()//accessor
	{
		return a;
	}

	double getB()//accessor
	{
		return b;
	}

	double getC()//accessor
	{
		return c;
	}

	double getDiscriminant()//accessor
	{
		return b * b - 4 * a * c;
	}

	double getRoot1()//accessor
	{
		if (getDiscriminant() < 0)
			return 0;
		else
		{
			return (-b + sqrt(getDiscriminant())) / (2 * a);
		}
	}

	double getRoot2()//accessor
	{
		if (getDiscriminant() < 0)
			return 0;
		else
		{
			return (-b - sqrt(getDiscriminant())) / (2 * a);
		}
	}
};


#pragma once