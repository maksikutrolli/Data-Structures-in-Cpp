/*
 *      Author: MaksiKutrolli
 */

#include <iostream>

using namespace std;


#include "NodeMapG.h"

//#include "DNodeG.h"
#include "IteratorG.h"
int main(){

//	NodeMapG<int,int> mm();

	NodeMapG<int,int> t1;

	t1.put(8, 5);

	t1.put(2, 5);

	t1.put(3, 7);

	t1.put(2, 3);

	t1.print();

	std::cout<<*t1.find(3)<<endl;

	IteratorG<int,int> it;

	it = t1.find(8);

	std::cout<<*it<<endl;


//	Entry<int,int> entry(2,3);

//	t1.put(2,4);

//	IteratorG<int,int> it;
//	it = t1.put(2,4);

//	std::cout<<*it;

//	t1.erase(2);



//	Entry<int,int> entry;
//
//	entry.setKey(2);
//	entry.setValue(5);
//
//	cout<<entry.valuee();
//
//
//
//
//
//	NodeMapG<int, int> t2;




	return 0;
}
