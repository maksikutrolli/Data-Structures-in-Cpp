/*
 *      Author: MaksiKutrolli
 */

#include <iostream>
using namespace std;

// Definition of the Ex1 class
class Ex1 {
private:
	int x;

public:
	Ex1() {
		cout << "Ex1 Default Constructor" << endl;
	}

	Ex1(int x) {
		this->x = x;
		cout << "Ex1 Constructor with Parameters" << endl;
	}

	~Ex1() {

	}
};

// Definition of the Ex2 class
class Ex2 {
private:
	int x;
	int d;
	Ex1 ex1;

public:
	Ex2() {
		cout << "Ex2 Default Constructor" << endl;
	}

	Ex2(int x, int d) {
		ex1 = Ex1(x);  // Creating an Ex1 object using parameterized constructor
		this->x = x;   // Assigning the value of x
		this->d = d;   // Assigning the value of d
		cout << "Ex2 Constructor with Parameters" << endl;
	}

	~Ex2() {

	}
};


//In this code:

//The Ex1 class has a default constructor and a parameterized constructor. The parameterized constructor initializes the private member x with the given value and prints a message.

//The Ex2 class has a default constructor and a parameterized constructor. The parameterized constructor takes two arguments, x and d. It creates an Ex1 object using its parameterized constructor, initializing ex1 with the given value of x. Then, it assigns values to x and d using the this pointer. Finally, it prints a message.

//In the main function, an Ex2 object ex2 is created using the parameterized constructor with arguments 2 and 3.


//When you run the program, the following output is generated:
//Ex1 Default Constructor   // This is the default construction of ex1 within Ex2
//Ex1 Constructor with Parameters  // This is the parameterized construction of ex1 within Ex2
//Ex2 Constructor with Parameters  // This is the parameterized construction of Ex2

//
//In this case, without an initializer list, the Ex1 object ex1 within the Ex2 class is first
//default-constructed and then assigned a value using the parameterized constructor.
//This leads to an unnecessary extra construction and assignment step. Using an initializer list
//in the constructor of Ex2 could avoid this extra work and provide a more efficient way to
//initialize the member ex1.

int main() {
	// Creating an Ex2 object using the parameterized constructor
	Ex2 ex2(2, 3);

	return 0;
}
