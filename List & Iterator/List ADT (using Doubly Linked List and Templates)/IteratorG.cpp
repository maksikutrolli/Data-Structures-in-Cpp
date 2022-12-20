/*
 *      Author: MaksiKutrolli
 */

#include "IteratorG.h"

template<typename T>
IteratorG<T>::IteratorG(DNodeG<T> *u) {
	v = u;
}

template<typename T>
T& IteratorG<T>::operator *() {
	return v->elem;
}

template<typename T>
bool IteratorG<T>::operator ==(const IteratorG &p) const {
	return v == p.v;
}

template<typename T>
bool IteratorG<T>::operator !=(const IteratorG &p) const {
	return v != p.v;
}

template<typename T>
IteratorG<T>& IteratorG<T>::operator ++() {
	 v = v->next;
	 return *this;
}

template<typename T>
IteratorG<T>& IteratorG<T>::operator --() {
	v = v->prev;
	return *this;
}


template class IteratorG<int>;
template class IteratorG<string>;

