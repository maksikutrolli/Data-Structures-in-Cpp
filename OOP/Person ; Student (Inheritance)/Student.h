/*
 *      Author: MaksiKutrolli
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

class Student : public Person { // Inherit from the Person class
private:
	string major;  // Major subject
	int gradYear;  // Graduation year

public:
	Student();  // Default constructor
	Student(const Person&, string, int);  // Parameterized constructor with Person object
	Student(string, string, string, string, int);  // Parameterized constructor with individual attributes
	virtual ~Student();  // Destructor

	virtual void printInfo();  // Print student information

	// Getter and setter methods for major
	string getMajor();
	void setMajor(string major);

	// Getter and setter methods for gradYear
	int getGradYear();
	void setGradYear(int gradYear);
};

#endif /* STUDENT_H_ */
