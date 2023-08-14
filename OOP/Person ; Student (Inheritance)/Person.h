
/*
 *      Author: MaksiKutrolli
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string firstName; // Private member variable for first name
	string lastName;  // Private member variable for last name
	string id;        // Private member variable for ID

public:
	Person();  // Default constructor
	Person(string, string, string);  // Parameterized constructor
	virtual ~Person();  // Destructor

	Person(const Person &p);  // Copy constructor
	void operator=(const Person &p);  // Copy assignment operator

	void printInfo();  // Print person information

	// Getter and setter methods for first name
	string getFirstName();
	void setFirstName(string);

	// Getter and setter methods for ID
	string getId();
	void setId(string);

	// Getter and setter methods for last name
	string getLastName();
	void setLastName(string);
};

#endif /* PERSON_H_ */
