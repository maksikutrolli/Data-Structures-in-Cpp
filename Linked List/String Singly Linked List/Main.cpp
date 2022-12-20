
#include <iostream>

using namespace std;

#include "StringLinkedList.h"

int main(){

	StringLinkedList sll;


	int i = 1;
	while(i<=10){
		sll.addFront(to_string(i));
		i++;
	}
//	sll.addFront("test");

	sll.print();

//	cout<<"test";

	return 0;
}


