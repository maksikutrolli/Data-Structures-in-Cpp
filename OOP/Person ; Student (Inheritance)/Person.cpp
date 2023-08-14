/*
 *      Author: MaksiKutrolli
 */


//Implementation of the Person class

#include "Person.h"

// Destructor definition
Person::~Person() {
	cout << "--->destroy person" << endl;
}

// Default constructor definition
Person::Person() {
	cout << "--->create person" << endl;
}

// Copy constructor implementation
Person::Person(const Person &p) {
	this->firstName = p.firstName;
	this->lastName = p.lastName;
	this->id = p.id;
}

// Parameterized constructor definition
Person::Person(string firstName, string lastName, string id) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = id;
	cout << "--->create person" << endl;
}

// Copy assignment operator definition
void Person::operator=(const Person &p) {
	this->firstName = p.firstName;
	this->lastName = p.lastName;
	this->id = p.id;
}

// Print person information
void Person::printInfo() {
	cout << "First Name: " << this->firstName << endl;
	cout << "Last Name: " << this->lastName << endl;
	cout << "Id: " << this->id << endl;
}

// Getter and setter methods
string Person::getFirstName() {
	return firstName;
}

void Person::setFirstName(string firstName) {
	this->firstName = firstName;
}

string Person::getId() {
	return id;
}

void Person::setId(const string id) {
	this->id = id;
}

string Person::getLastName() {
	return lastName;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}
