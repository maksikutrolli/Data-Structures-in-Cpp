
/*
 *      Author: MaksiKutrolli
 */
 
#include "ListArray.h"


ListArray::ListArray( int c):capacity(c), lastIndex(-1), listArray(new std::string [capacity]){

}


ListArray::~ListArray(){
	delete [] listArray;
}

int ListArray::size(){
	return lastIndex + 1;
}

bool ListArray::empty(){
	return size() == 0;
}

bool ListArray::insert(int i, std::string v){

	if(size() == capacity) return false;


	if(i>=0 && i <= lastIndex + 1){

		for(int k = lastIndex; k>=i; k--){
			listArray[k+1] = listArray[k];
		}

		lastIndex ++;
		listArray[i] = v;

	}
}

void ListArray::modify(int i, std::string nV){
	if(i>=0 && i<=lastIndex){
		listArray[i] = nV;
	}
}

//implement it at home
bool ListArray::remove(int i){
	return false;
}


std::string ListArray::getByIndex(int i){
	if(i>=0 && i<=lastIndex){
		return listArray[i];
	}
	return "";
}

