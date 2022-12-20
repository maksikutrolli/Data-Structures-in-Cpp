
/*
 *      Author: MaksiKutrolli
 */

#include <iostream>


using namespace std;

#include "LinkedListQueueG.h"

#include <iostream>

using namespace std;

int main(){

	LinkedListQueueG<int, QueueException> intQueue;
	intQueue.enqueue(1);
	intQueue.enqueue(2);
	intQueue.enqueue(3);
	intQueue.enqueue(4);
	intQueue.print();

	intQueue.dequeue();
	intQueue.print();

	intQueue.enqueue(5);
	intQueue.enqueue(6);
	intQueue.print();

	intQueue.dequeue();

	intQueue.enqueue(7);
	intQueue.print();

	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.print();
	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.print();


	intQueue.enqueue(8);
	intQueue.enqueue(9);
	intQueue.print();


	return 0;
}
