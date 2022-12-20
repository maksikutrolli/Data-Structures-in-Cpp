
#ifndef SCORES_H_
#define SCORES_H_

#include "GameEntry.h"
#include <iostream>

#include "IndexOutOfBounds.h"

class Scores {
public:
	Scores(int maxEnt = 10); // constructor
	~Scores(); // destructor

	void add(const GameEntry& e); // add a game entry

	GameEntry remove(int i) throw(IndexOutOfBounds); // remove the ith entry


	void printAll();
	void printIndex(int indx) throw(IndexOutOfBounds);

private:
		int maxEntries; // maximum number of entries
		int numEntries; // actual number of entries
		GameEntry* entries; // array of game entries
};

#endif /* SCORES_H_ */
