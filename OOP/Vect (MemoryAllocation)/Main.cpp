
#include <iostream>
using namespace std;
class Vect { // a vector class

	public:
		int* data; // an array holding the vector
		int size; // number of array entries
	public:
		Vect(){};
		Vect(int n){ // constructor
			size = n;
			data = new int[n]; // allocate array
			}; // constructor, given size

		~Vect(){ // destructor
			delete [ ] data; // free the allocated array
		}; // destructor

		void printInfo(){
			for(int i=0;i<size;i++){
				cout<<data[i]<<endl;
			}
			cout<<endl;
		};
//
		Vect(const Vect & v){ // copy constructor from a
			size = v.size; // copy sizes
			data = new int[size]; // allocate new array
			for (int i = 0; i < size; i++) { // copy the vector contents
				data[i] = v.data[i];
			}
		};
//
		Vect& operator=(const Vect& a) { // assignment operator from a
			if (this != &a) { // avoid self-assignment
				delete [ ] data; // delete old array
				size = a.size; // set new size
				data = new int[size]; // allocate new array

				for (int i=0; i < size; i++) { // copy the vector contents
					data[i] = a.data[i];
				}
			}
			return *this;
		};


};


int main(){
	Vect a(2); // a is a vector of size 2
	a.data[0]=2;
	a.data[1]=3;
	a.printInfo();
	Vect b = a; // initialize b from a (DANGER!)
	Vect c; // c is a vector (default size 10)
	c = a; // assign a to c (DANGER!)

	c=a=b;
	c.printInfo();

	c.data[1]=10;

	c.printInfo();
	a.printInfo();
	b.printInfo();

	return 0;
}
