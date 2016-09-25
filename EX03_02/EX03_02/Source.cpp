/////////////////////////
//Program Name: EX03_02
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 9/22/2016
///////////////////////

/*pg. 368 Exercise 9.6: Algebra: quadratic equations*/
#include "Header.h"

//class QuadraticEquation in header file

int main()
{
	cout << "Enter a, b, c: ";//prompt for numbers
	double a, b, c, discriminant;
	cin >> a >> b >> c;

	QuadraticEquation equation(a, b, c);//call class
	discriminant = equation.getDiscriminant();

	if (discriminant < 0)//sqrt (0) means answer DNE
	{
		cout << "The equation has no roots" << endl;
	}
	else if (discriminant == 0)
	{
		cout << "The root is " << equation.getRoot1() << endl;
	}
	else //(discriminant >= 0)
	{
		cout << "The roots are " << equation.getRoot1() << " and " << equation.getRoot2() << endl;
	}


	return 0;
}
