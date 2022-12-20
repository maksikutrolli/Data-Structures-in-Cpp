/*
 *      Author: MaksiKutrolli
 */

#include "EnglishRuler.h"

EnglishRuler::EnglishRuler(int nInches, int majorLength): nInches(nInches), majorLength(majorLength) {
	// TODO Auto-generated constructor stub

}

EnglishRuler::~EnglishRuler() {
	// TODO Auto-generated destructor stub
}

int EnglishRuler::getMajorLength() const {
	return majorLength;
}

void EnglishRuler::setMajorLength(int majorLength) {
	this->majorLength = majorLength;
}

int EnglishRuler::getNInches() const {
	return nInches;
}

void EnglishRuler::setNInches(int nInches) {
	this->nInches = nInches;
}


void EnglishRuler::drawOneTick(int tickLength, int tickLabel) {
	for (int i = 0; i < tickLength; i++)
		cout <<"-";
	if (tickLabel >= 0) cout <<" "<<tickLabel;
		cout <<endl;
}
void EnglishRuler::drawTicks(int tickLength) { // draw ticks of given length
	if (tickLength > 0) { // stop when length drops to 0
		drawTicks(tickLength-1); // recursively draw left ticks
		drawOneTick(tickLength); // draw center tick
		drawTicks(tickLength-1); // recursively draw right ticks
	}
}
void EnglishRuler::drawRuler() {// draw the entire ruler
	drawOneTick(majorLength, 0); // draw tick 0 and its label
	for (int i = 1; i <= nInches; i++) {
		drawTicks(majorLength-1); // draw ticks for this inch
		drawOneTick(majorLength, i); // draw tick i and its label
	}
}
