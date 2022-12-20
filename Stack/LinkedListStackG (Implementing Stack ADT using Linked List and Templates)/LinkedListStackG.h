/*
 *      Author: MaksiKutrolli
 */

#ifndef LINKEDLISTSTACKG_H_
#define LINKEDLISTSTACKG_H_

#include "StackG.h"
#include "GLinkedList.h"


template <typename T, typename R>
class LinkedListStackG: public StackG<T,R> {
public:
	LinkedListStackG();
	virtual ~LinkedListStackG();

public:

	int size() const; // number of items in the stack
	bool empty() const; // is the stack empty?
	const T& top() const throw(R); // the top element
	void push(const T& e); // push element onto stack
	void pop() throw(R); // pop the stack

private: // member data
	GLinkedList<T> S; // linked list of elements
	int n; // number of elements
};

#endif /* LINKEDLISTSTACKG_H_ */
