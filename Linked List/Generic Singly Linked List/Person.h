
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;


using namespace std;
class Person {


private:
	string firstName;
	string lastName;
	string id;

public:
	Person();
	Person(string, string, string );
	virtual ~Person();

	Person(Person &p);
	void operator = (const Person &p );

	void printInfo();

	string getFirstName();
	void setFirstName(string);
	string getId();
	void setId(string);
	string getLastName();
	void setLastName(string);


	friend ostream& operator<<(ostream& os, Person& p){
		os<<endl<<"{"<<p.firstName<<" ; "<<p.lastName<<"}";
		return os;
	}
};

#endif /* PERSON_H_ */
