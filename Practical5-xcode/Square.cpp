/*
 * Square.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Square.h"

using std::string;

Square::Square(float side, const std::string& borderColor, bool fill, const std::string& fillColor)
: Rectangle(side, side, borderColor, fill, fillColor){
	// TODO: implement me
}

Square::~Square() {
	// TODO: implement me
}

string Square::toString() const{
	std::ostringstream ss;
	ss << height();
	std::string s(ss.str());

	string string ="Square with side "+ s;
	return string;
}
