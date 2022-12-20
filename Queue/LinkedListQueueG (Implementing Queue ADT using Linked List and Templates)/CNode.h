/*
 *      Author: MaksiKutrolli
 */

#ifndef CNODE_H_
#define CNODE_H_

#include <iostream>

using namespace std;

template<typename T>
class CircleList;

template<typename T>
class CNode{
private:
	T elem;
	CNode *next;

	friend class CircleList<T>;
};



#endif /* CNODE_H_ */
