
#include "Student.h"

Student::Student(){
	cout<<"--->create student"<<endl;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
	cout<<"--->destroy student"<<endl;
}

Student::Student(Person &p,string major, int gradYear):Person(p) {
	this->major = major;
	this->gradYear = gradYear;
cout<<"--->create student"<<endl;
}

Student::Student(string firstName, string lastName, string id,
		string major, int gradYear):Person(firstName,lastName,id) {
	this->major = major;
	this->gradYear = gradYear;
	cout<<"--->create student"<<endl;
}



void Student::printInfo() {
	Person::printInfo();
	cout<<"Major: "<< this->major<<endl;
	cout<<"Graduate year: "<< this->gradYear<<endl;
}



int main(){

//	//create a Person object
//	Person person("X1","Y2","ID1");
//	// create e Student Object using the person object
//	Student student(person, "Physics", 2022);
//	// create e Student Object
//	Student student("X2","Y2","ID2", "Physics", 2022);
//
//	//invokes Person::getFirstName()
//	cout<< student.getFirstName()<<endl;
//	//invokes Person::printInfo()
//	person.printInfo();
//	//invokes Student::printInfo()
//	student.printInfo();
//	//ERROR!
////	person.setMajor();
//	//Okay
//	student.setMajor("English");



//	Person* pp[100]; // array of 100 Person pointers
//	pp[0] = new Person("X1","Y1","ID1"); // add a Person (details omitted)
//	pp[1] = new Student("X2","Y2","ID2", "Physics", 2022); // add a Student (details omitted)
//
//	cout << pp[1]->getLastName() <<endl; // okay
//	pp[0]->printInfo(); // calls Person::print()
//	pp[1]->printInfo(); // also calls Person::print() (!)
////	pp[1]->setMajor("English"); // ERROR!
//
//
//	delete pp;
//	Student s;

	Student st("X2","Y2","ID2", "Physics", 2022);
	st.printInfo();



	return 0;
}





