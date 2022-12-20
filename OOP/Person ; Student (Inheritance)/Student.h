

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

class Student: public Person {

private:
	string major;//major subject
	int gradYear;//graduation year

public:
	Student();
	Student(Person&, string, int);

	Student(string, int);
	Student(string,string, string, string, int);
	virtual ~Student();

	virtual void printInfo() ;

	string getMajor(){
		return major;
	}

	void setMajor(string major) {
		this->major = major;
	}
};

#endif /* STUDENT_H_ */
