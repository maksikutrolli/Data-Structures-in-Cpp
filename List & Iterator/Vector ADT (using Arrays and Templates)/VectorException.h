/*
 *      Author: MaksiKutrolli
 */


#ifndef VECTORXCEPTION_H_
#define VECTORXCEPTION_H_

#include <iostream>

#include "RuntimeException.h"

using namespace std;

class VectorException: public RuntimeException {
public:
	VectorException(const string& err) : RuntimeException(err) {}
};


#endif /* VECTORXCEPTION_H_*/
