/*
 * Shape.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Shape.h"

using std::string;
using std::ostream;



Shape::Shape(const std::string& borderColor, bool fill,
		const std::string& fillColor) :
		borderColor_ { borderColor }, fillColor_ { fillColor }, filled_ { fill } {
}

Shape::~Shape() {
	// TODO: implement me
}

std::string Shape::borderColor() const {
	return borderColor_;
}

void Shape::setBorderColor(const std::string& color) {
	borderColor_ = color;
}

bool Shape::fill() const {
	return filled_;
}
void Shape::setFill(bool fill) {
	filled_ = fill;
}

std::string Shape::fillColor() const {
	return fillColor_;
}

void Shape::setFillColor(const std::string& color) {
	fillColor_ = color;
}

float Shape::area() const {
	// TODO: implement me or remove me
	return 0.0;
}

float Shape::perimeter() const {
	// TODO: implement me or remove me
	return 0.0;
}

std::string Shape::toString() const {
	std::string stringx = "(border: " + borderColor();
	if (fill())
		stringx += ", fill: " + fillColor();

	return stringx;
}

std::ostream& operator<<(std::ostream& o, const Shape& s) {
	o<< s.toString();
	return o;
}
