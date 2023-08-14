/*
 *      Author: MaksiKutrolli
 */

#ifndef VECTOR_H_
#define VECTOR_H_


// Definition of the Vector class
class Vector {
public:
	int* data;  // Pointer to an array holding the vector's elements
	int size;   // Number of elements in the array

public:
	// Default constructor
	Vector();

	// Parameterized constructor
	Vector(int n);

	// Destructor
	~Vector();

	// Copy constructor
	Vector(const Vector &v);

	// Copy assignment operator
	Vector& operator=(const Vector &a);

	// Method to print vector information
	void printInfo();

};



#endif /* VECTOR_H_ */
