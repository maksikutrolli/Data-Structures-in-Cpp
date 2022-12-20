/*
 *      Author: MaksiKutrolli
 */
#ifndef LINKEDLISTQUEUEG_H_
#define LINKEDLISTQUEUEG_H_

#include "QueueG.h"
#include "QueueException.h"
#include "CircleList.h"

//#include "../Runtime/QueueException.h"

template <typename T, typename R>
class LinkedListQueueG: public QueueG<T,R> {
public:
	LinkedListQueueG();
	virtual ~LinkedListQueueG();

	int size() const; // number of items in the queue
	bool empty() const; // is the queue empty?
	const T& front() const throw(R); // the front element
	void enqueue(const T& e); // enqueue element at rear
	void dequeue() throw(R); // dequeue element at front

	void print();

private: // member data
	CircleList<T> C; // circular list of elements
	int n; // number of elements

};

#endif /* LINKEDLISTQUEUEG_H_ */
