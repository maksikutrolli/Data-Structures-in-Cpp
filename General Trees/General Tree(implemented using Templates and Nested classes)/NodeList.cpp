#ifndef NODELIST_CPP
#define NODELIST_CPP
#include "NodeList.h"

template <typename Elem>
NodeList<Elem>::Iterator::Iterator(Node<Elem>* u)		// constructor from Node*
{ v = u; }

template <typename Elem>
Elem& NodeList<Elem>::Iterator::operator*()		// reference to the element
{ return v->elem; }

template <typename Elem>
// compare positions
bool NodeList<Elem>::Iterator::operator==(const Iterator& p) const
{ return v == p.v; }

template <typename Elem>
bool NodeList<Elem>::Iterator::operator!=(const Iterator& p) const
{ return v != p.v; }

// move to next position
template <typename Elem>
typename NodeList<Elem>::Iterator& NodeList<Elem>::Iterator::operator++()
{ v = v->next; return *this; }

template <typename Elem>
// move to previous position
typename NodeList<Elem>::Iterator& NodeList<Elem>::Iterator::operator--()
{ v = v->prev; return *this; }

template <typename Elem>
// move up by some positions
typename NodeList<Elem>::Iterator& NodeList<Elem>::Iterator::operator+(int n)
{ for (int i = 0; i < n ; i++) v = v->next; return *this; }

template <typename Elem>
// move down by some positions
typename NodeList<Elem>::Iterator& NodeList<Elem>::Iterator::operator-(int n)
{ for (int i = 0; i < n; i++) v = v->prev; return *this; }


template <typename Elem>
NodeList<Elem>::NodeList() {			// constructor
	n = 0;					// initially empty
	header = new Node<Elem>;				// create sentinels
	trailer = new Node<Elem>;
	header->next = trailer;			// have them point to each other
	trailer->prev = header;
}

template <typename Elem>
int NodeList<Elem>::size() const 			// list size
{ return n; }

template <typename Elem>
bool NodeList<Elem>::empty() const 			// is the list empty?
{ return (size() == 0); }

template <typename Elem>
typename NodeList<Elem>::Iterator NodeList<Elem>::begin() const
{ return Iterator(header->next); }

template <typename Elem>
typename NodeList<Elem>::Iterator NodeList<Elem>::end() const
{ return Iterator(trailer); }

template <typename Elem>
void NodeList<Elem>::insertFront(const Elem& e)	// insert at front
{ insert(begin(), e); }

template <typename Elem>
void NodeList<Elem>::insertBack(const Elem& e)	// insert at rear
{ insert(end(), e); }

// insert e before p
template <typename Elem>
void NodeList<Elem>::insert(const NodeList<Elem>::Iterator& p, const Elem& e) {
	Node<Elem>* w = p.v;				// p's node
	Node<Elem>* u = w->prev;				// p's predecessor
	Node<Elem>* v = new Node<Elem>;				// new node to insert
	v->elem = e;
	v->next = w;  w->prev = v;			// link in v before w
	v->prev = u;  u->next = v;			// link in v after u
	n++;
}

template <typename Elem>
void NodeList<Elem>::eraseFront()			// remove first
{ erase(begin()); }

template <typename Elem>
void NodeList<Elem>::eraseBack()			// remove last
{ erase(--end()); }

template <typename Elem>
void NodeList<Elem>::erase(const Iterator& p) {	// remove p
	Node<Elem>* v = p.v;				// node to remove
	Node<Elem>* w = v->next;				// successor
	Node<Elem>* u = v->prev;				// predecessor
	u->next = w;  w->prev = u;			// unlink p
	delete v;					// delete this node
	n--;					// one fewer element
}


#endif
