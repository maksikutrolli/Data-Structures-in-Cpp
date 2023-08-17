
/*
 *      Author: MaksiKutrolli
 */

#include "Vector.h"  // Include the corresponding header file

#include <iostream>   // Include the necessary standard input/output library

using namespace std;  // Use the standard namespace for easier access to standard library components

// Constructor definition for Vector class (Default constructor)
Vector::Vector() {
	size = 1;          // Initialize the size to 1
	data = new int[size];  // Allocate memory for the data array
}

// Constructor definition for Vector class (Parameterized constructor)
Vector::Vector(int n) {
	size = n;         // Set the size of the vector
	data = new int[n]; // Allocate memory for the data array
}

// Destructor definition for Vector class
Vector::~Vector() {
	delete[] data;  // Deallocate the memory allocated for the data array
}

// Copy constructor definition for Vector class
Vector::Vector(const Vector &v) {
	size = v.size;           // Copy the size of the source vector
	data = new int[size];    // Allocate new memory for the data array
	for (int i = 0; i < size; i++) {
		data[i] = v.data[i]; // Copy the elements from the source vector
	}
}

// Copy assignment operator definition for Vector class
Vector& Vector::operator=(const Vector &a) {
	if (this != &a) {         // Check for self-assignment
		delete[] data;        // Deallocate existing memory
		size = a.size;        // Copy the size of the source vector
		data = new int[size]; // Allocate new memory for the data array
		for (int i = 0; i < size; i++) {
			data[i] = a.data[i]; // Copy the elements from the source vector
		}
	}
	return *this;  // Return the modified vector object
}

// Method definition to print vector information
void Vector::printInfo() {
	for (int i = 0; i < size; i++) {
		cout << data[i] << endl; // Print each element of the vector
	}
	cout << endl;  // Print an extra line for formatting
}
