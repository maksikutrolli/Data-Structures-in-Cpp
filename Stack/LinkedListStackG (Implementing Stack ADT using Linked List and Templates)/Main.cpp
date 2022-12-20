/*
 *      Author: MaksiKutrolli
 */

#include <iostream>


using namespace std;

#include "LinkedListStackG.h"

#include "StackException.h"

#include <iostream>

using namespace std;

int main(){

//	ArrayStackString<string,string> arrStack;

//	ArrayStack arrStack;

//	cout<<arrStack.size();

	LinkedListStackG<int, StackException> intStack; // A = [ ], size = 0
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




	LinkedListStackG<string, StackException> B; // B = [ ], size = 0
	B.push("Bob1"); // B = [Bob*], size = 1
	B.push("Alice"); // B = [Bob, Alice*], size = 2
	cout << B.top() << endl; B.pop(); // B = [Bob*], outputs: Alice
	B.push("Eve1"); // B = [Bob, Eve*], size = 2

	return 0;
}
