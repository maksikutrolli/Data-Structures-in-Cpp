
#include "GameEntry.h"


GameEntry::GameEntry(const string& n, int s) : name(n), score(s) {
}

GameEntry::~GameEntry() {
	// TODO Auto-generated destructor stub
}


string GameEntry::getName() const {
	return name;
}

int GameEntry::getScore() const {
	return score;
}


