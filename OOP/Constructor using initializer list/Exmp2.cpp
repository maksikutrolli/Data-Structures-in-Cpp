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

	// Using initializer list to initialize members and the Ex1 object
	Ex2(int x, int d) : x(x), d(d), ex1(Ex1(x)) {
		cout << "Ex2 Constructor with Parameters" << endl;
	}

	~Ex2() {

	}
};


//In this code:
//
//The Ex1 class remains the same as in the previous example.
//
//The Ex2 class has a default constructor and a parameterized constructor. However, the parameterized constructor now uses an initializer list to directly initialize members and the ex1 object.
//
//In the main function, an Ex2 object ex2_init is created using the parameterized constructor with arguments 2 and 3.

//When you run the program, the following output is generated:
//Ex1 Constructor with Parameters  // This is the parameterized construction of ex1 within Ex2
//Ex2 Constructor with Parameters  // This is the parameterized construction of Ex2

//
//With the use of an initializer list, the Ex1 object ex1 within the Ex2 class is directly constructed
//with the parameterized constructor, avoiding the unnecessary default construction and later assignment
//steps. This results in more efficient and direct member initialization.


int main() {
	// Creating an Ex2 object using the constructor with an initializer list
	Ex2 ex2_init(2, 3);

	return 0;
}
