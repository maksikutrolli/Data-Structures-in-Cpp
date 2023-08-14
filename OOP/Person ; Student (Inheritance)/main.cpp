/*
 *      Author: MaksiKutrolli
 */


//In the given example, inheritance showcases its benefit by allowing the Student class to inherit
//properties and methods from the Person class. This leads to code reuse and a more organized design,
//as the common attributes and behaviors of both classes are defined in the Person class. As a result,
//the Student class can focus on its specialized attributes like major and gradYear while leveraging
//the existing functionality of the base class. This inheritance relationship simplifies development,
//promotes consistency, and enhances maintainability in the codebase.

//In this example, we have two classes:
//Person and Student. The Student class is derived from the Person class, showcasing inheritance,
//where the Student class inherits properties and behaviors from the Person class.


//--- PERSON CLASS ---
//
//The Person class represents a basic entity with attributes like firstName, lastName, and id. It also provides methods to initialize, modify, and display this information.
//
//- Constructors: The class has two constructors, a default constructor and a parameterized constructor that initializes the firstName, lastName, and id attributes.
//
//- Destructor: The class defines a destructor that prints a message upon object destruction.
//
//- Copy Constructor and Copy Assignment Operator: The class includes a copy constructor and a copy assignment operator to handle object copying.
//
//- Getter and Setter Methods: The class provides methods to get and set firstName, lastName, and id.
//
//- printInfo() Method: This method prints the details of the person.

//
//--- STUDENT CLASS ---
//
//The Student class is derived from the Person class and adds additional attributes: major and gradYear, representing the student's major subject and graduation year.
//
//- Constructor Inheritance: The Student class inherits constructors from the Person class, including the default and parameterized constructors. It also introduces its own parameterized constructors.
//
//- Destructor Inheritance: The Student class inherits the destructor from the Person class.
//
//- Overridden printInfo() Method: The Student class overrides the printInfo() method of the Person class to include its own attributes and call the parent class's printInfo() method.
//
//- Additional Methods: The class includes methods to get and set the major and gradYear member variables.

//
//--- MAIN FUNCTION ---
//
//The main function demonstrates the inheritance relationship and polymorphism between the Person and Student classes:
//
//1. A Person object 'person' is created using the parameterized constructor.
//
//2. A Student object 'student1' is created using the parameterized constructor with the 'person' object, major "Computer Science," and graduation year 2023.
//
//3. Another Student object 'student2' is created using the parameterized constructor with individual attributes.
//
//4. Using polymorphism, the printInfo() method is called on each object:
//   - For the person object, the base class's printInfo() method is called.
//   - For the student objects, the overridden printInfo() method in the derived class is called, displaying both person and student information.


//Overall, this example illustrates how inheritance allows classes to inherit and extend properties and
//methods from other classes, promoting code reuse and providing a foundation for object-oriented design.

#include "Student.h"  // Include the Student class definition
#include "Person.h"   // Include the Person class definition

int main() {
    // Create a Person object using the parameterized constructor
    Person person("John", "Doe", "12345");

    // Create a Student object using the parameterized constructor with Person object
    Student student1(person, "Computer Science", 2023);

    // Create another Student object using the parameterized constructor
    Student student2("Alice", "Smith", "67890", "Biology", 2022);

    // Demonstrate the inheritance and polymorphism
    cout << "Person Information:" << endl;
    person.printInfo();  // Call the printInfo() method of the Person class

    cout << "\nStudent 1 Information:" << endl;
    student1.printInfo();  // Call the overridden printInfo() method of the Student class

    cout << "\nStudent 2 Information:" << endl;
    student2.printInfo();  // Call the overridden printInfo() method of the Student class

    return 0;
}
