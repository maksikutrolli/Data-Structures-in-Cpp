/*
 *      Author: MaksiKutrolli
 */

#include <iostream>


using namespace std;

#include "Point2DSTL.h"

#include "ListPriorityQueueSTL.h"
#include "PriorityQueueException.h"

int main(){

	ListPriorityQueueSTL<Point2DSTL, LeftRight, PriorityQueueException> PList;

	PList.insert(Point2DSTL(2,5));
	PList.insert(Point2DSTL(3,2));
	PList.insert(Point2DSTL(1,9));

	while (!PList.isEmpty())
	{
		cout << PList.min() << endl;
		PList.removeMin();
	}

//	PList.removeMin();

	return 0;
}
