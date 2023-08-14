/*
 *      Author: MaksiKutrolli
 */

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include <iostream>
using namespace std;
#include "Circle.h"


// Ellipse class declaration
class Ellipse {
private:
	double a;  // Semi-major axis of the ellipse
	double b;  // Semi-minor axis of the ellipse
	const double pi = 3;  // Value of pi

public:
	Ellipse();  // Default constructor
	Ellipse(double, double);  // Parameterized constructor
	virtual ~Ellipse();  // Destructor
	double area();  // Method to calculate the area of the ellipse
	void convert(Circle c1);  // Method to convert a circle to an ellipse

};

#endif /* ELLIPSE_H_ */
