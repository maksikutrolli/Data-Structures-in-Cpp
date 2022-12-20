
#include "Person.h"



Person::~Person() {

	cout<<"--->destroy person"<<endl;
}

Person::Person() {
	cout<<"--->create person"<<endl;
}

Person::Person(string firstName, string lastName, string id) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->id = id;
	cout<<"--->create person"<<endl;
}

void Person::operator =(const Person &p) {
	this->firstName = p.firstName;
	this->lastName = p.lastName;
	this->id = p.id;
}

void Person::printInfo() {

	cout<<"First Name: "<< this->firstName<<endl;
	cout<<"Last Name: "<< this->lastName<<endl;
	cout<<"Id: "<< this->id<<endl;
}


string Person::getFirstName(){
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

string Person::getLastName(){
	return lastName;
}
//
Person::Person(Person &p) {
	this->firstName = p.firstName;
	this->lastName = p.lastName;
	this->id = p.id;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}

