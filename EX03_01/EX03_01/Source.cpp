/////////////////////////
//Program Name: EX03_01
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/22/2016
///////////////////////

#include "Header.h"
/*pg: 367 Exercise 9.2: the Fan Class*/

//The class exists in the Header file.

/*draw the UML diagram for the class. implement the class. write a test program that creates two Fan objects. 
assign speed 3, radius 10, and turn it on to the first object.
assign speed 2, radius 5, and turn it off to the second object. invoke their accessor functions to display the fan properties*/

int main()
{
	string answer;
	cout << "Properties of first fan: " << endl;
	Fan fan1;
	fan1.setSpeed(3);
	fan1.setOn(true);
	fan1.setRadius(10);

	cout << "Fan speed: " << fan1.getSpeed() << endl;
	cout << "Fan radius: " << fan1.getRadius() << endl;

	if (fan1.getOn() == true)
		answer = "yes";
	else
		answer = "no";
	cout << "Fan on? " << answer << endl << endl;
	
	Fan fan2;
	fan2.setSpeed(2);
	fan2.setRadius(5);
	fan2.setOn(false);

	cout << "Properties of first fan: " << endl;
	cout << "Fan speed: " << fan2.getSpeed() << endl;
	cout << "Fan radius: " << fan2.getRadius() << endl;

	if (fan2.getOn() == true)
		answer = "yes";
	else
		answer = "no";
	cout << "Fan on? " << answer << endl << endl;

	return 0;
}