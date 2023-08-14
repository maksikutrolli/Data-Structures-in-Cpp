/*
 *      Author: MaksiKutrolli
 */

//In this example, we have defined and implemented two classes, Circle and Ellipse, which represent geometric
//shapes in a 2D space. The code demonstrates the concept of friend classes and friend functions, which allow
//external functions or classes to access private members of the defined classes.


//In this example, we have:
//
//Circle Class:
//The Circle class represents a circle with a private member radius.
//The pi constant is set to 3.
//It has a default constructor, a parameterized constructor, a destructor, and a method to calculate the area of the circle.
//The operator= overloading function is defined to enable assignment between Circle objects.
//A friend function duplicate is declared, which can access the private members of the Circle class.
//A friend class Ellipse is declared, granting it access to the private members of the Circle class.


//Ellipse Class:
//The Ellipse class represents an ellipse with two private members a (semi-major axis) and b (semi-minor axis).
//The pi constant is set to 3.
//It has a default constructor, a parameterized constructor, a destructor, and a method to calculate the area of the ellipse.
//It includes a method convert that takes a Circle object and sets the ellipse's a and b values based on the circle's radius.
//The Ellipse class is a friend of the Circle class, allowing it to access Circle's private members.


//Main Function:
//In the main function, we create an Ellipse object ellipse1 with semi-major axis 2 and semi-minor axis 3.
//We also create a Circle object circle with a radius of 1.
//The area of ellipse1 is calculated and printed, demonstrating the area method of the Ellipse class.
//The convert method of the Ellipse class is then used to convert the circle into an ellipse by setting the ellipse's a and b values equal to the circle's radius.
//The area of the converted ellipse (ellipse1) is recalculated and printed, demonstrating the change in area after the conversion.

//
//friend functions and classes are used to grant access to private members between the Circle and Ellipse classes,
//enabling them to interact and manipulate each other's properties. This example provides a clear illustration of
//how friend functions and classes can be employed to facilitate controlled access to private members in C++.

#include "Ellipse.h"


// Main function
int main() {
	Ellipse ellipse1(2, 3);  // Create an ellipse object with semi-major axis 2 and semi-minor axis 3
	Circle circle(1);  // Create a circle object with radius 1

	cout << ellipse1.area() << '\n';  // Print the area of the ellipse
	ellipse1.convert(circle);  // Convert the circle to an ellipse
	cout << ellipse1.area() << '\n';  // Print the area of the converted ellipse
	return 0;
}
