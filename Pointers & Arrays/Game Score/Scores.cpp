
#include "Scores.h"

Scores::Scores(int maxEnt) { // constructor
	maxEntries = maxEnt; // save the max size
	entries = new GameEntry[maxEntries]; // allocate array storage
	numEntries = 0; // initially no elements

}


Scores::~Scores() { // destructor
	delete[ ] entries;
}



void Scores::add(const GameEntry& e) { // add a game entry

	int newScore = e.getScore(); // score to add

	if (numEntries == maxEntries) { // the array is full
		if (newScore <= entries[maxEntries-1].getScore())
			return; // not high enough - ignore
	}
	else numEntries++; // if not full, one more entry

	int i = numEntries - 2; // start with the next to last
	while ( i >= 0 && newScore > entries[i].getScore() ) {
		entries[i+1] = entries[i]; // shift right if smaller
		i--;
	}
	entries[i+1] = e; // put e in the empty spot
}

GameEntry Scores::remove(int i) throw(IndexOutOfBounds) {

	if ((i < 0) || (i >= numEntries)) // invalid index
		throw IndexOutOfBounds("Invalid index");

	GameEntry e = entries[i]; // save the removed object
	for (int j = i+1; j < numEntries; j++)
		entries[j-1] = entries[j]; // shift entries left

	numEntries--; // one fewer entry

	return e; // return the removed object
}


void Scores::printAll(){
	cout<<endl;
	for (int i = 0; i < numEntries; i++)
		cout<<entries[i].getName()<<": "<<entries[i].getScore()<<endl;
	cout<<endl;
}


void Scores::printIndex(int indx)throw(IndexOutOfBounds){
	if ((indx < 0) || (indx >= numEntries)) // invalid index
		throw IndexOutOfBounds("Invalid index");
	cout<<endl;
		cout<<entries[indx].getName()<<": "<<entries[indx].getScore()<<endl;
	cout<<endl;
}





