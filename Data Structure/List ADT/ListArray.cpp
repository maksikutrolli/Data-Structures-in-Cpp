

#include "ListArray.h"

ListArray::ListArray(){

}

ListArray::~ListArray() {
	// TODO Auto-generated destructor stub
}

ListArray::ListArray(const ListArray &other) {
	// TODO Auto-generated constructor stub

}

ListArray& ListArray::operator=(const ListArray &other) {
	// TODO Auto-generated method stub

}

bool ListArray::isEmpty() {
	return end == -1;
}

bool ListArray::insertElement(int value, int index) {

	if(end == MaxSize -1) return false;

	if (index == -1) index = end + 1;

	if(index> end+1 || index<0 || index>MaxSize) throw out_of_range("index out of range");//  return false; or throw index out of range

	for(int i = end ;i>=index; i--){
		listArray[i+1] = listArray[i];
	}

	end = end + 1;
	listArray[index] = value;
	return true;
}

bool ListArray::modifyElement(int value, int index) {

	if(index> end+1 || index<0 || index>MaxSize) throw out_of_range("index out of range");//  return false;//index out of range

	listArray[index] = value;
	return true;
}

bool ListArray::removeElement(int index) {
	if(index>=end || index<0) return false;

	for(int i = index;i<end-1; i++){
		listArray[i] = listArray[i+1];
	}
	end = end - 1;
	return true;

}

int ListArray::getElement(int index){
	if(index>end || index<0) {
		throw out_of_range("getElement(index) The ListArray has " + to_string(end + 1) +  " elemnets, and you are trying to reach out the " + to_string(index) + " element");
	}

	return listArray[index];
}

int ListArray::getSize() {
	return end +1;
}

void ListArray::print() {

	cout<<"[";
	for(int i = 0;i<=end; i++){
		cout<<listArray[i];
		i==end?cout<<"":cout<<";";
	}
	cout<<"]"<<endl;
}
