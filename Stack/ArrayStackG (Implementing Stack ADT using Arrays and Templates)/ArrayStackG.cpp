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
	// TODO
}

template <typename T, typename R>
bool ArrayStackG<T,R>::empty()const{
	// TODO
}

template <typename T, typename R>
const T& ArrayStackG<T,R>::top() const throw(R){
	// TODO
}

template <typename T, typename R>
void ArrayStackG<T,R>::push(const T& e){
	// TODO
}

template <typename T, typename R>
void ArrayStackG<T,R>::pop() throw(R){
	// TODO
}

// TODO
// TODO
