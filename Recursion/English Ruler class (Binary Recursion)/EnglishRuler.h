/*
 *      Author: MaksiKutrolli
 */

#ifndef ENGLISHRULER_H_
#define ENGLISHRULER_H_

#include <iostream>
using namespace std;

class EnglishRuler {
public:
	EnglishRuler(int nInches, int majorLength);
	virtual ~EnglishRuler();

	void drawRuler();

	int getMajorLength() const;
	void setMajorLength(int);
	int getNInches() const;
	void setNInches(int);

private:
	void drawOneTick(int tickLength, int tickLabel = -1);
	void drawTicks(int tickLength);
private:
	int nInches;
	int majorLength;

};

#endif /* ENGLISHRULER_H_ */
