/*
 *      Author: MaksiKutrolli
 */

#ifndef LISTPRIORITYQUEUESTL_H_
#define LISTPRIORITYQUEUESTL_H_

#include "PriorityQueueG.h"
#include "Point2DSTL.h"
#include "PriorityQueueException.h"
#include <list>

using namespace std;

template <typename E, typename C, typename R>
class ListPriorityQueueSTL: public PriorityQueueG<E, C, R> {
public:
	ListPriorityQueueSTL();
	virtual ~ListPriorityQueueSTL();

	int size() const; // number of elements
	bool isEmpty() const; // is the queue empty?
	void insert(const E& e); // insert element
	const E& min() const throw(R); // minimum element
	void removeMin() throw(R); // remove minimum

private:
	std::list<E> L; // priority queue contents
	C isLess; // less-than comparator
};


#endif /* LISTPRIORITYQUEUESTL_H_ */
