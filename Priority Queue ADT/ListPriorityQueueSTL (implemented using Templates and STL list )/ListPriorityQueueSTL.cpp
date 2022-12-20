/*
 *      Author: MaksiKutrolli
 */

#include "ListPriorityQueueSTL.h"

template<typename E, typename C, typename R>
ListPriorityQueueSTL<E, C, R>::ListPriorityQueueSTL() {

}

template<typename E, typename C, typename R>
ListPriorityQueueSTL<E, C, R>::~ListPriorityQueueSTL() {
}

template<typename E, typename C, typename R>
int ListPriorityQueueSTL<E, C, R>::size() const {
	return L.size();
}

template<typename E, typename C, typename R>
bool ListPriorityQueueSTL<E, C, R>::isEmpty() const {
	return L.empty();
}

template<typename E, typename C, typename R>
void ListPriorityQueueSTL<E, C, R>::insert(const E &e) {
    typename std::list<E>::iterator p;
    p = L.begin();
    while (p != L.end() && !isLess(e, *p)) ++p;		// find larger element
    L.insert(p, e);					// insert e before p

}

template<typename E, typename C, typename R>
const E& ListPriorityQueueSTL<E, C, R>::min() const throw(R){
	if (L.empty())
		throw R("min of empty ListPriorityQueueSTL");
	return L.front();
}

template<typename E, typename C, typename R>
void ListPriorityQueueSTL<E, C, R>::removeMin() throw(R){
	if (L.empty())
		throw R("remove from an empty ListPriorityQueueSTL");
	L.pop_front();
}


template class ListPriorityQueueSTL<Point2DSTL, LeftRight, PriorityQueueException>;



