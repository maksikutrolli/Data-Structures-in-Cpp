/*
 *      Author: MaksiKutrolli
 */

#include "CircleList.h"

template<typename T>
CircleList<T>::CircleList():cursor(nullptr ), size(0){
	// TODO Auto-generated constructor stub
}

template<typename T>
CircleList<T>::~CircleList() {

	while (!empty()) remove();
}

template<typename T>
bool CircleList<T>::empty() const {
	return (cursor == nullptr );
}

template<typename T>
const T& CircleList<T>::front() const {
	return cursor->elem;
}

template<typename T>
const T& CircleList<T>::back() const {

	return cursor->next->elem;
}

template<typename T>
void CircleList<T>::advance() {
	cursor = cursor->next;

}

template<typename T>
void CircleList<T>::add(const T &e) {// add after cursor
	CNode<T> *newEl = new CNode<T>; // create a new node
	newEl->elem = e;

	if(cursor == NULL){
		newEl->next = newEl; // v points to itself
		cursor = newEl; // cursor points to v
	}
	else{
		newEl->next = cursor->next; // list is nonempty?
		cursor->next = newEl; // link in v after cursor
	}
	size++;
}

template<typename T>
void CircleList<T>::remove() { // remove node after cursor
	CNode<T>* old = cursor->next; // the node being removed
	if (old == cursor) {// removing the only node?
		cursor = NULL; // list is now empty
		size = 0;
	}
	else{
		cursor->next = old->next; // link out the old node
		size--;
	}
	delete old; // delete the old node
}


template<typename T>
void CircleList<T>::print(){
	CNode<T> *p = cursor;
	int count = 1;

	while(count<=size){

		cout<<p->elem<<" <--> ";

		p = p->next;

		count++;


	}
	cout<<endl;
//	delete p;
}

template<typename T>
int& CircleList<T>::getSize() {
	return size;
}


 template class CircleList<int>;
 template class CircleList<string>;
