/*
 *      Author: MaksiKutrolli
 */
#include "LinkedListStackG.h"

#include "StackException.h"

template<typename T, typename R>
LinkedListStackG<T, R>::LinkedListStackG(): S(), n(0)  {
}

template<typename T, typename R>
LinkedListStackG<T, R>::~LinkedListStackG() {
}

template<typename T, typename R>
int LinkedListStackG<T, R>::size() const {
	return n;
}

template<typename T, typename R>
bool LinkedListStackG<T, R>::empty() const {
	return (n==0);
}

template<typename T, typename R>
const T& LinkedListStackG<T, R>::top() const throw (R) {
	if (empty()) throw R("Top of empty stack");
	return S.front();
}

template<typename T, typename R>
void LinkedListStackG<T, R>::push(const T &e) {
	S.addFront(e);
	n++;
}

template<typename T, typename R>
void LinkedListStackG<T, R>::pop() throw (R) {
	if(empty()) throw R("Pop from empty stack");
	n--;
	S.removeFront();
}

template class LinkedListStackG<int, StackException>;
template class LinkedListStackG<string, StackException>;
