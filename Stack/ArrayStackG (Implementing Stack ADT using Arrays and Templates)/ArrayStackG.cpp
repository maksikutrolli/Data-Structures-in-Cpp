/*
 *      Author: MaksiKutrolli
 */

#include "ArrayStackG.h"

#include "StackException.h"

#include <iostream>

using namespace std;

template <typename T, typename R>
ArrayStackG<T,R>::ArrayStackG(int cap): S(new T[cap]), capacity(cap), t(-1) {
	// TODO Auto-generated constructor stub

}


template <typename T, typename R>
ArrayStackG<T,R>::~ArrayStackG() {
	// TODO Auto-generated destructor stub
}

template <typename T, typename R>
int ArrayStackG<T,R>::size()const{
	return t+1;
}

template <typename T, typename R>
bool ArrayStackG<T,R>::empty()const{
	return (t < 0);
}

template <typename T, typename R>
const T& ArrayStackG<T,R>::top() const throw(R){
	if (empty()) throw R("Top of empty stack");
	return S[t];
}

template <typename T, typename R>
void ArrayStackG<T,R>::push(const T& e){
	if (size() == capacity) throw R("Push to full stack");
	t++;
	S[t] = e;

}

template <typename T, typename R>
void ArrayStackG<T,R>::pop() throw(R){
	if (empty()) throw R("Pop from empty stack");
	--t;

}

template class ArrayStackG<int, StackException>;
template class ArrayStackG<string, StackException>;
