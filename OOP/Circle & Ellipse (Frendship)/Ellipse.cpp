
/*
 *      Author: MaksiKutrolli
 */

#include "Ellipse.h"

// Implementation of Ellipse class methods

// Default constructor
Ellipse::Ellipse() {
	cout << "default" << endl;
}

// Parameterized constructor
Ellipse::Ellipse(double a, double b) {
	this->a = a;
	this->b = b;
}

// Destructor
Ellipse::~Ellipse() {
	// TODO Auto-generated destructor stub
}

// Method to calculate the area of the ellipse
double Ellipse::area() {
	return pi * a * b;
}

// Method to convert a circle to an ellipse
void Ellipse::convert(Circle circle) {
	a = circle.radius;
	b = circle.radius;
}
