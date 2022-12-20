/*
 *      Author: MaksiKutrolli
 */

#ifndef VECTORG_H_
#define VECTORG_H_

template <typename T, typename R>

class VectorG{
public:
	virtual ~ VectorG() = default;

	virtual int size() const = 0; // number of elements
	virtual bool empty() const = 0; // is vector empty?

	virtual const T& set(int i, const T& e) throw(R) = 0; // element at index
	virtual const T& at(int i) throw(R)= 0;  // sets an element at index
	virtual void erase(int i) = 0;  // remove element at index
	virtual void insert(int i, const T& e) throw (R) = 0;  // insert element at index


};



#endif /* VECTORG_H_ */



