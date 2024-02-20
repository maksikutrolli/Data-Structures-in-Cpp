
#include "ListArray.h"

int main(){

	ListArray list(9);

	list.insert(0, "test0");

	list.insert(1, "test1");

	for(int i = 0; i< list.size();i++){
		std::cout<<list.getByIndex(i)<<std::endl;
	}

	std::cout<<std::endl;
	std::cout<<std::endl;

	list.insert(0, "test2");

	for(int i = 0; i< list.size();i++){
		std::cout<<list.getByIndex(i)<<std::endl;
	}

	std::cout<< list.getByIndex(-1);



	return 0;
}
