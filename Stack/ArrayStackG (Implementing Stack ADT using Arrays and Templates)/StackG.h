/*
 *      Author: MaksiKutrolli
 */

#ifndef STACKG_H_
#define STACKG_H_


template <typename T, typename R>

class StackG{
public:
	virtual ~ StackG() = default;

	virtual int size() const = 0; // number of items in stack
	virtual bool empty() const = 0; // is the stack empty?
	virtual const T& top() const throw(R) = 0; // the top element
	virtual void push(const T& e) = 0; // push x onto the stack
	virtual void pop() throw(R) = 0; // remove the top element

};



#endif /* STACKG_H_ */
