/*
 * Rectangle.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Rectangle.h"

using std::string;

Rectangle::Rectangle(float width, float height, const std::string& borderColor,
		bool fill, const std::string& fillColor) :
		Shape(borderColor, fill, fillColor), width_ { width }, height_ { height } {
}

Rectangle::~Rectangle() {
}

float Rectangle::width() const {
	return width_;
}

float Rectangle::height() const {
	return height_;
}

void Rectangle::setWidth(float width) {
	width_ = width;
}

void Rectangle::setHeight(float height) {
	height_ = height;
}

float Rectangle::area() const {
	return height_ * width_;
}

float Rectangle::perimeter() const {
	return 2 * (height_ + width_);
}
string Rectangle::toString() const {
	std::ostringstream ssw;
	ssw << width_;
	std::string sw(ssw.str());

	std::ostringstream ssh;
	ssh << height_;
	std::string sh(ssh.str());

	string stringx = "Rectangle of width " + sw + " and height " + sh;
	stringx += Shape::toString();
	return stringx;
}
//add function area + perimeters
