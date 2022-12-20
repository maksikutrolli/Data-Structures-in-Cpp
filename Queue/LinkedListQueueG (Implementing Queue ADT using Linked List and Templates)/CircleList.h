/*
 *      Author: MaksiKutrolli
 */
#ifndef CIRCLELIST_H_
#define CIRCLELIST_H_

#include "CNode.h"

template<typename T>
class CircleList {
public:
	CircleList();

	~CircleList(); // destructor
	bool empty() const; // is list empty?
	const T& front() const; // get element at cursor
	const T& back() const; // get element following cursor
	void advance(); //advance cursor
	void add(const T& e); // add node after cursor
	void remove(); // remove node after cursor

	void print();

	 int& getSize();//is this method secure


private:
	CNode<T> * cursor;
	int size;

};

#endif /* CIRCLELIST_H_ */
