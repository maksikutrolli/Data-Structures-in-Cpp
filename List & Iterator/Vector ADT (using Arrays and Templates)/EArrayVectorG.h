/*
 *      Author: MaksiKutrolli
 */


#ifndef EARRAYVECTORG_H_
#define EARRAYVECTORG_H_

#include <iostream>

using namespace std;

#include "VectorG.h"
#include "VectorException.h"

template <typename T, typename R>

class EArrayVectorG: public VectorG<T,R> {
public:
	EArrayVectorG();
	virtual ~EArrayVectorG();
	int size() const; // number of elements
	bool empty() const; // is vector empty?
	const T& at(int i) throw(R); // element at index
	void erase(int i); // remove element at index
	void insert(int i , const T& e) throw (R); // insert element at index
	void reserve(int N); // reserve at least N spots

	const T& set(int i, const T& e) throw(R); // set value at index

	void print();

private:
	int capacity; // current array size
	int n; // number of elements in vector
	T* A; // array storing the elements

	int max(int n1, int n2);//finds max between two integers
};


#endif /* EARRAYVECTORG_H_ */
