

#ifndef INDEXOUTOFBOUNDS_H_
#define INDEXOUTOFBOUNDS_H_

#include "RuntimeException.h"

class IndexOutOfBounds: public RuntimeException{
public:
	IndexOutOfBounds(const string& err): RuntimeException(err){

	}
};



#endif /* INDEXOUTOFBOUNDS_H_ */
