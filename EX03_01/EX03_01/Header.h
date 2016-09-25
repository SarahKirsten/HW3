/////////////////////////
//Program Name: EX03_01
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

/*create a class named Fan
int data field named speed that specifies the speed of the fan. has three speeds indicated with a value 1, 2, or 3

bool data field named on that specifies whether the fan is on

double data field named radius that specifies the radius of the fan

a no-arg constructor that creates a default fan with speed 1, on false, and radius 5.

the accessor and mutator functions for all the data fields
*/

class Fan
{
public://data field
	int speed;//three speeds 1, 2, or 3
	bool on;//is the fan on or not
	double radius;//what's the radius of the fan

	Fan()//no-arg constructor
	{
		speed = 1;//default speed
		on = false;//default on or off
		radius = 5;//default fan radius
	}

	int getSpeed()//accessor
	{
		return speed;
	}

	void setSpeed(int setSpeed)//mutator
	{
		speed = setSpeed;
	}

	bool getOn()//accessor
	{
		return on;
	}

	void setOn(bool trueOrFalse)//mutator
	{
		on = trueOrFalse;
	}

	double getRadius()//accessor
	{
		return radius;
	}

	void setRadius(double setRadius)//mutator
	{
		radius = setRadius;
	}
};

#pragma once