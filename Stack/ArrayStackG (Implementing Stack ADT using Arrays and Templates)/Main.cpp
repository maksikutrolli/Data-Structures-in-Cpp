/*
 *      Author: MaksiKutrolli
 */

#include <iostream>


using namespace std;

#include "ArrayStackG.h"

#include "StackException.h"

#include <iostream>

using namespace std;

int main(){



	ArrayStackG<int, StackException> intStack(5); // A = [ ], size = 0
	intStack.push(7); // A = [7*], size = 1
	intStack.push(13); // A = [7, 13*], size = 2
	cout << intStack.top() << endl; //intStack.pop(); // A = [7*], outputs: 13
	intStack.push(9); // A = [7, 9*], size = 2
	cout << intStack.top() << endl; // A = [7, 9*], outputs: 9
	cout << intStack.top() << endl; intStack.pop(); // A = [7*], outputs: 9

//	intStack.push(9);
//	intStack.push(9);
//	intStack.push(9);
//	remove
//	intStack.pop();
//	intStack.pop();
//	intStack.pop();
//	intStack.pop();
//	intStack.pop();




	ArrayStackG<string, StackException> B(10); // B = [ ], size = 0
	B.push("Bob"); // B = [Bob*], size = 1
	B.push("Alice"); // B = [Bob, Alice*], size = 2
	cout << B.top() << endl; B.pop(); // B = [Bob*], outputs: Alice
	B.push("Eve"); // B = [Bob, Eve*], size = 2

	return 0;
}
