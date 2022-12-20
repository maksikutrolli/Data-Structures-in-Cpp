
#include "Ellipse.h"


Ellipse::Ellipse() {
	cout<<"default"<<endl;
}

Ellipse::Ellipse(double a, double b) {
	this->a = a;
	this->b = b;
}

Ellipse::~Ellipse() {
	// TODO Auto-generated destructor stub
}

double Ellipse::area() {

	return pi * a * b;
}

void Ellipse::convert(Circle circle) {
	a = circle.radius;
	b = circle.radius;
}

int main(){
	Ellipse ellipse1(2,3);
	Circle circle(1);

	cout << ellipse1.area() << '\n';
	ellipse1.convert(circle);
	cout << ellipse1.area() << '\n';
	return 0;
}


