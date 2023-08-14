/*
 *      Author: MaksiKutrolli
 */

//Implementation of the Student class

#include "Student.h"

// Default constructor definition
Student::Student() {
	cout << "--->create student" << endl;
}

// Destructor definition
Student::~Student() {
	cout << "--->destroy student" << endl;
}

// Parameterized constructor definition with Person object
Student::Student(const Person &p, string major, int gradYear) : Person(p) {
	this->major = major;
	this->gradYear = gradYear;
	cout << "--->create student" << endl;
}

// Parameterized constructor definition with individual attributes
Student::Student(string firstName, string lastName, string id, string major, int gradYear) : Person(firstName, lastName, id) {
	this->major = major;
	this->gradYear = gradYear;
	cout << "--->create student" << endl;
}

// Print student information
void Student::printInfo() {
	Person::printInfo();  // Call base class's printInfo() method
	cout << "Major: " << this->major << endl;
	cout << "Graduate year: " << this->gradYear << endl;
}


// Getter for major
string Student::getMajor() {
	return major;
}

// Setter for major
void Student::setMajor(string major) {
	this->major = major;
}

// Getter for gradYear
int Student::getGradYear() {
	return gradYear;
}

// Setter for gradYear
void Student::setGradYear(int gradYear) {
	this->gradYear = gradYear;
}
