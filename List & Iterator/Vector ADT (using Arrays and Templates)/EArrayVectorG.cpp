/*
 *      Author: MaksiKutrolli
 */


#include "EArrayVectorG.h"


template<typename T, typename R>
EArrayVectorG<T, R>::EArrayVectorG(): A(nullptr), capacity(0), n(0) {
}

template<typename T, typename R>
EArrayVectorG<T, R>::~EArrayVectorG() {
	if (A != nullptr)
		delete [] A;
}

template<typename T, typename R>
int EArrayVectorG<T, R>::size() const {
	return n;
}

template<typename T, typename R>
bool EArrayVectorG<T, R>::empty() const {
	return size() == 0;
}


template<typename T, typename R>
const T& EArrayVectorG<T, R>::at(int i) throw (R) {
	if (i < 0 || i >= n)
		throw R("illegal index in function at()");
	return A[i];
}

template<typename T, typename R>
void EArrayVectorG<T, R>::erase(int i) {
	for (int j = i+1; j < n; j++) // shift elements down
		A[j - 1] = A[j];
	n--;
}

template<typename T, typename R>
void EArrayVectorG<T, R>::insert(int i, const T &e) throw (R){
	if (n >= capacity ) // overflow?
		reserve(max(1, 2 * capacity)); // double array size
	if (i < 0 || i >= capacity)
		throw R("illegal index in function insert()");
	for (int j = n - 1; j >= i; j--) // shift elements up
		A[j+1] = A[j];
	A[i] = e; // put in empty slot
	n++; // one more element
}


template<typename T, typename R>
void EArrayVectorG<T, R>::reserve(int N) {
	if (capacity >= N) return; // already big enough
	T* B = new T[N]; // allocate bigger array
	for (int j = 0; j < n; j++) // copy contents to new array
		B[j] = A[j];
	if (A != nullptr) delete []A; // discard old array
	A = B; // make B the new array
	capacity = N; // set new capacity

}

template<typename T, typename R>
const T& EArrayVectorG<T, R>::set(int i, const T& e) throw (R) { // set value at index
	if (i < 0 || i >= n)
		throw R("illegal index in function set()");
	A[i] = e;
	return A[i];
}

template<typename T, typename R>
void EArrayVectorG<T, R>::print(){

	for(int i = 0; i<capacity; i++){
		cout<<A[i]<<" ; ";
	}
	cout<<endl;
}

template<typename T, typename R>
int EArrayVectorG<T, R>::max(int n1, int n2) {
	if(n1> n2) return n1;
	return n2;
};

template class EArrayVectorG<int, VectorException>;
template class EArrayVectorG<string, VectorException>;
