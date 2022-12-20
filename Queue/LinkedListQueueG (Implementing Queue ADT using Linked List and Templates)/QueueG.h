/*
 *      Author: MaksiKutrolli
 */

#ifndef QUEUEG_H_
#define QUEUEG_H_


//template <typename T>
template <typename T, typename R>

class QueueG{
public:
	virtual ~ QueueG() = default;

	virtual int size() const = 0; // number of items in queue
	virtual bool empty() const = 0; // is the queue empty?
	virtual const T& front() const throw(R) = 0; // the front element
	virtual void enqueue (const T& e) = 0; // enqueue element at rear
	virtual void dequeue() throw(R) = 0; // dequeue element at front


};



#endif /* QUEUEG_H_ */



