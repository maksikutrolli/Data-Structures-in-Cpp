/*
 *      Author: MaksiKutrolli
 */

#ifndef ARRAYSTACKSTRING_H_
#define ARRAYSTACKSTRING_H_

#include "StackG.h"



template <typename T, typename R>
class ArrayStackG: public StackG<T,R>{

public:
	ArrayStackG(int cap = MaxSize);
	virtual ~ArrayStackG();

	int size()const;
	bool empty()const;

	const T& top() const throw(R); // the top element
	void push(const T& e); // push x onto the stack
	void pop() throw(R); // remove the top element


private:
	static const int MaxSize = 50;
	T* S; // array of stack elements
	int capacity; // stack capacity
	int t; // index of the top of the stack

};

#endif /* ARRAYSTACKSTRING_H_ */
