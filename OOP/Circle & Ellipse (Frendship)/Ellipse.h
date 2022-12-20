
#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include <iostream>
using namespace std;

#include "Circle.h"

class Ellipse {

private:
	double a;
	double b;
	const double  pi = 3;
public:
	Ellipse();
	Ellipse(double, double);
	virtual ~Ellipse();
	double area();



	void convert(Circle c1);


};

#endif /* ELLIPSE_H_ */
