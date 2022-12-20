

#include "Circle.h"

Circle::Circle() {
}
Circle::Circle(double r) {
	radius = r;
}
Circle::~Circle() {
}
double Circle::area() {
	return pi*radius*radius;
}

//assignment operator
void Circle::operator =(const Circle &other) {
	radius = other.radius;
}

Circle duplicate (const Circle& other){
	Circle circle;
	circle.radius = other.radius * 2;

	return circle;
}


