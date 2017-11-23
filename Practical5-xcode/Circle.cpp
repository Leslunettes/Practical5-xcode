/*
 * Circle.cpp
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#include "Circle.h"

constexpr double PI = 3.14159265;
#include <string>

using std::string;

Circle::Circle(float radius, const std::string& borderColor, bool fill,
		const std::string& fillColor) :
		Shape(borderColor, fill, fillColor), radius_ { radius } {
	// TODO: implement me
}

Circle::~Circle() {
	// TODO: implement me
}

float Circle::radius() const {
	return radius_;
}

void Circle::setRadius(float radius) {
	radius_ = radius;

}
float Circle::area() const {
	return PI * radius_ * radius_;
}

float Circle::perimeter() const {
	return 2 * PI * radius_;
}

std::string Circle::toString() const {


	std::string stringx = "Circle of radius " +  std::string to_string(radius_) + Shape::toString();
	return stringx;
}



