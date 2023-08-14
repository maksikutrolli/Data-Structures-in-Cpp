/*
 *      Author: MaksiKutrolli
 */

#include "Circle.h"

// Implementation of Circle class methods

// Default constructor
Circle::Circle() {
}

// Parameterized constructor
Circle::Circle(double r) {
	radius = r;
}

// Destructor
Circle::~Circle() {
}

// Method to calculate the area of the circle
double Circle::area() {
	return pi * radius * radius;
}

// Assignment operator
void Circle::operator=(const Circle &other) {
	radius = other.radius;
}

// Friend function to duplicate a circle
Circle duplicate(const Circle& other) {
	Circle circle;
	circle.radius = other.radius * 2;
	return circle;
}

