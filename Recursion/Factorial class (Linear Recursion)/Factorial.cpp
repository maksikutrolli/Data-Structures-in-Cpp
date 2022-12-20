/*
 *      Author: MaksiKutrolli
 */

#include "Factorial.h"

Factorial::Factorial(int n):n(n) {
	// TODO Auto-generated constructor stub

}

Factorial::~Factorial() {
	// TODO Auto-generated destructor stub
}


int Factorial::normalFactorial(int num){
	int f = 1;
    if (num == 0 || num == 1){
        f = 1;
    }
    else{
        while (num > 1){
            f = f * num;
            num--;
        }
    }
    return f;
}

int Factorial::recursiveFactorial(int num){
    if (num == 0){
        return 1;
    }
    else{
    	return num * recursiveFactorial(num - 1);
    }
}

int Factorial::getN() const {
	return n;
}

void Factorial::setN(int n) {
	this->n = n;
}

int Factorial::calculateFactorial(bool recursive)  {
	if(recursive)
		return recursiveFactorial(n);
	return normalFactorial(n);
}
