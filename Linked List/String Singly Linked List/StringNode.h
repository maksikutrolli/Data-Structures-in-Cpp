

#ifndef STRINGNODE_H_
#define STRINGNODE_H_

#include <iostream>
#include <string>
using namespace std;

class StringNode { // a node in a list of strings
private:
	string elem; // element value
	StringNode* next; // next item in the list
	friend class StringLinkedList; // provide StringLinkedList access
};




#endif /* STRINGNODE_H_ */
