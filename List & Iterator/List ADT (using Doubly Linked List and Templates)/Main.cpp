/*
 *      Author: MaksiKutrolli
 */


#include <iostream>

using namespace std;


#include "NodeListG.h"

int main(){

	NodeListG<int> nl;

	nl.insertFront(2);

	nl.insertFront(3);

	nl.insertFront(4);
	nl.insertBack(200);

	nl.print();


	nl.eraseBack();
	nl.eraseFront();

	nl.print();

	return 0;
}
