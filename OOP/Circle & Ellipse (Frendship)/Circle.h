

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
using namespace std;


class Circle {
private:
	double radius;
	const double  pi = 3;
public:
	Circle();//
	Circle(double);
	virtual ~Circle();
	void operator=(const Circle &other);
	double area();


	friend Circle duplicate (const Circle& circle);

	friend class Ellipse;



};

#endif /* CIRCLE_H_ */
