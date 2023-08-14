/*
 *      Author: MaksiKutrolli
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
using namespace std;


// Declaration of the Circle class
class Circle {
private:
	double radius;   // Radius of the circle
	const double pi = 3;  // Value of pi

public:
	Circle();  // Default constructor
	Circle(double);  // Parameterized constructor
	virtual ~Circle();  // Destructor
	void operator=(const Circle &other);  // Assignment operator
	double area();  // Method to calculate the area of the circle

	// Friend function declarations
	friend Circle duplicate(const Circle& circle);  // Friend function to duplicate a circle
	friend class Ellipse;  // Friend class declaration
};

#endif /* CIRCLE_H_ */
