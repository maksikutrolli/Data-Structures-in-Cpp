/*
 *      Author: MaksiKutrolli
 */

#ifndef FACTORIAL_H_
#define FACTORIAL_H_

#include <iostream>
using namespace std;

class Factorial {
public:
	Factorial(int n);
	virtual ~Factorial();

	int calculateFactorial(bool recursive = false);

	int getN() const;
	void setN(int n);


private:
    int normalFactorial(int num);
    int recursiveFactorial(int num);

private:
    int n;
};


#endif /* FACTORIAL_H_ */
