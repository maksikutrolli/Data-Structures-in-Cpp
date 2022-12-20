#include <iostream>

using namespace std;

class Ex1{

private:
	int x;
public:
	Ex1(){
		cout<< "Ex1 Default Constructor"<<endl;
	}

	Ex1(int x){
		this->x = x;
		cout<< "Ex1 Constructor with Parameters"<<endl;
	}

	~Ex1(){

	}


};


class Ex2{

private:
	int x;
	int d;
	Ex1 ex1;
public:
	Ex2(){
		cout<< "Ex2 Default Constructor"<<endl;
	}

	Ex2(int x, int d){

		ex1 = Ex1(x);
		cout<< "Ex2 Constructor with Parameters"<<endl;
	}

	~Ex2(){

	}


};


int main(){

	Ex2 ex2(2,3);


	return 0;

}
