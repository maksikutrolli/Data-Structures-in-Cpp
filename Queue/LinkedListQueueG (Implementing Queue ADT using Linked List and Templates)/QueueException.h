/*
 *      Author: MaksiKutrolli
 */

#ifndef STACKEXCEPTION_H_
#define STACKEXCEPTION_H_

#include <iostream>

#include "RuntimeException.h"

using namespace std;

// Exception thrown on performing top or pop of an empty stack.
class QueueException: public RuntimeException {
public:
	QueueException(const string& err) : RuntimeException(err) {}
};


#endif /* STACKEXCEPTION_H_ */
