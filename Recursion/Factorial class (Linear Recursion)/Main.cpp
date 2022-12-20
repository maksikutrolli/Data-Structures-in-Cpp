/*
 *      Author: MaksiKutrolli
 */

#include "Factorial.h"


int main(){

	Factorial f(3);

	cout <<f.calculateFactorial()<<endl;

	cout << f.calculateFactorial(true)<<endl;


	return 0;
}
