/*
 *      Author: MaksiKutrolli
 */

//
//This example demonstrates memory allocation, copying, and assignment in the context of the Vector class.
//The class provides proper memory management using constructors, destructors, copy constructors, and copy
//assignment operators. The main function showcases the creation, copying, assignment, and
//modification of Vector objects, emphasizing the importance of proper memory handling and deep
//copying when working with dynamically allocated memory.

//--- VECTOR CLASS ---
//The Vector class demonstrates memory allocation, copying, and assignment concepts through a dynamic array representation. The class offers a flexible framework for creating and manipulating vectors of integer elements.
//
//Default Constructor: Initializes a vector with a default size of 1. The data pointer points to a dynamically allocated memory block, and the size of the vector is set to 1.
//
//Parameterized Constructor: Accepts an integer n as input to create a vector of custom size. Memory is allocated to the data array, and the size of the vector is set accordingly.
//
//Destructor: Deallocates the dynamically allocated memory using the delete [] operator, preventing memory leaks and freeing resources when objects go out of scope.
//
//Copy Constructor: Creates a new Vector object by performing a deep copy of another vector v. The size is copied, and a new memory block is allocated for the data array. The elements are then copied from the source vector.
//
//Copy Assignment Operator: Overloads the = operator to assign the contents of another vector a to the current vector. The assignment checks for self-assignment and prevents memory leaks by deallocating the old memory before allocating new memory and copying the data.
//
//printInfo() Method: Displays the contents of the vector's data array by iterating through each element and printing it to the standard output.
//
//This Vector class provides a foundational understanding of memory management, object copying, and assignment in C++. It demonstrates how to create objects dynamically and handle their memory allocation effectively, and how to ensure proper copying to avoid unintended side effects.

//
//--- Main Function ---
//
//The main function exemplifies the practical application of the Vector class by showcasing memory allocation, copying, assignment, and modification of vector objects.
//
//Vector Creation (a): A Vector object a is instantiated with a custom size of 2. The printInfo() method is called to display the elements of vector a.
//
//Copy Constructor (b): A new Vector object b is initialized by copying the contents of vector a. The data and size of vector b are independent from vector a.
//
//Default Vector Creation (c): A default-initialized Vector object c is declared. It doesn't specify size and defaults to a size of 1.
//
//Assignment (c): The elements of vector a are assigned to vector c, effectively copying the data from vector a into vector c.
//
//Chain Assignment: The assignment c = a = b demonstrates chain assignment. The elements of vector b are assigned to vector a, and then the elements of vector a are assigned to vector c.
//
//Printing (c): The elements of vector c are printed using the printInfo() method.
//
//Modification: The element at index 1 of vector c is modified to have the value 10.
//
//Printing After Modification: The modified elements of vector c are printed, followed by the elements of vectors a and b.

//Return 0: The program returns 0 to indicate successful execution.


#include "Vector.h"  // Include the Vector class definition

int main() {
	Vector a(2);  // Create a Vector object 'a' with size 2
	a.printInfo(); // Print the elements of vector 'a'

	Vector b = a;  // Initialize vector 'b' with a copy of vector 'a'
	Vector c;      // Declare vector 'c' without specifying size (default size 10)
	c = a;          // Assign the elements of vector 'a' to vector 'c'

	c = a = b;      // Chain assignment: Assign elements of 'b' to 'a', then to 'c'

	c.printInfo();  // Print the elements of vector 'c'

	c.data[1] = 10; // Modify the element at index 1 of vector 'c'

	c.printInfo();  // Print the modified elements of vector 'c'
	a.printInfo();  // Print the elements of vector 'a'
	b.printInfo();  // Print the elements of vector 'b'

	return 0;       // Return 0 to indicate successful program execution
}
