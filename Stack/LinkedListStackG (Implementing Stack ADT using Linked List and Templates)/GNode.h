/*
 *      Author: MaksiKutrolli
 */

#ifndef GNODE_H_
#define GNODE_H_

template<typename T>
class GLinkedList;

template<typename T>
class GNode { // a node in a list of strings
private:
	T elem; // element value
	GNode<T>* next; // next item in the list
	friend class GLinkedList<T>; // provide StringLinkedList access
};




#endif /* GNODE_H_ */
