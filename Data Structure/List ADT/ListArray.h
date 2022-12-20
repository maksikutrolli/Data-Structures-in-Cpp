

#ifndef LISTARRAY_H_
#define LISTARRAY_H_

#include <iostream>

using namespace std;

#include "List.h"

class ListArray:public List {

public:
	static const int MaxSize = 50;
	int end = -1;
	int listArray[MaxSize];

public:
	ListArray();
	virtual ~ListArray();
	ListArray(const ListArray &other);
	ListArray& operator=(const ListArray &other);

	 bool isEmpty();
	 bool insertElement(int value, int index = -1);
	 bool modifyElement(int value, int index);
	 bool removeElement(int index);
	 int getElement(int index);
	 int getSize();

	 void print();

};

#endif /* LISTARRAY_H_ */
