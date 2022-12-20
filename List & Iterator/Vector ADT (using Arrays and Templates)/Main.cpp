/*
 *      Author: MaksiKutrolli
 */


#include "EArrayVectorG.h"
#include "VectorException.h"

#include <iostream>

using namespace std;

int main(){

	EArrayVectorG<int,VectorException> arrVec;

	arrVec.insert(0, 0);

	arrVec.insert(1, 1);

	arrVec.insert(2, 2);
	arrVec.print();
//
	arrVec.insert(3, 5);
	arrVec.insert(3, 5);
	arrVec.insert(3, 5);
	arrVec.print();


	arrVec.print();


	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"D: ";

	int * D = new int[5];

	D[3]=29;
	for(int i=0; i<5; i++)
	{
		cout<<D[i]<<" ; ";
	}


	return 0;
}
