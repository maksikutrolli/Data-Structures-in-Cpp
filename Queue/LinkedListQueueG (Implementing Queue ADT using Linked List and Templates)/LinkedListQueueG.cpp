/*
 *      Author: MaksiKutrolli
 */
#include "LinkedListQueueG.h"

template <typename T, typename R>
LinkedListQueueG<T,R>::LinkedListQueueG(): C(), n(0) {
	// TODO Auto-generated constructor stub

}

template <typename T, typename R>
LinkedListQueueG<T,R>::~LinkedListQueueG() {
	// TODO Auto-generated destructor stub
}

template<typename T, typename R>
int LinkedListQueueG<T, R>::size() const {
	return n;
}

template<typename T, typename R>
bool LinkedListQueueG<T, R>::empty() const {
	return n==0;
}

template<typename T, typename R>
const T& LinkedListQueueG<T, R>::front() const throw (R) {
	if (empty())
		throw R("front of empty queue");
	return C.front();
}

template<typename T, typename R>
void LinkedListQueueG<T, R>::enqueue(const T &e) {
	C.add(e); // insert after cursor
	C.advance(); // . . .and advance
	n++;
}

template<typename T, typename R>
void LinkedListQueueG<T, R>::dequeue() throw (R) {
	if (empty())
		throw R("dequeue of empty queue");
	C.remove(); // remove from list front
	n--;
}


template<typename T, typename R>
void LinkedListQueueG<T, R>::print(){
	C.print();
	cout<<endl;
}


template class LinkedListQueueG<int, QueueException>;
template class LinkedListQueueG<string, QueueException>;
