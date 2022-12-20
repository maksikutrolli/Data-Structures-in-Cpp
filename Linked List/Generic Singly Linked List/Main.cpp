
#include <iostream>

using namespace std;

#include "GLinkedList.h"
#include <string>


#include  "Person.h"
int main(){

	GLinkedList<Person> sll;

	sll.addFront(Person("fName1","lName1","I9876J"));

	sll.addFront(Person("fName2","lName2","I9826J"));


	sll.print();

	cout<<"test";

	return 0;
}
