/*
 *      Author: MaksiKutrolli
 */

#include "GLinkedList.h"

template<typename T>
GLinkedList<T>::GLinkedList() // constructor
: head(NULL) {

}

template<typename T>
GLinkedList<T>::~GLinkedList() // destructor
{
	while (!empty()) removeFront();
}

template<typename T>
bool GLinkedList<T>::empty() const // is list empty?
{
	return head == NULL;
}

template<typename T>
const T& GLinkedList<T>::front() const // get front element
{
	return head->elem;
}

template<typename T>
void GLinkedList<T>::addFront(const T& e) { // add to front of list
	GNode<T>* v = new GNode<T>; // create new node
	v->elem = e; // store data
	v->next = head; // head now follows v
	head = v; // v is now the head
}

template<typename T>
void GLinkedList<T>::removeFront() { // remove front item
	GNode<T>* old = head; // save current head
	head = old->next; // skip over old head
	delete old; // delete the old head
}

template<typename T>
void GLinkedList<T>::print(){
	GNode<T> *p = head;
	while(p != NULL){

		cout<<p->elem<<" --> ";

		p = p->next;

	}
	cout<<"NULL"<<endl;
}

template<typename T>
int GLinkedList<T>::size() const{


	return n;
}

template class GLinkedList<int>;
template class GLinkedList<string>;

