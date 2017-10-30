/*
 * Rectangle.h
 *
 *  Created on: 23 Oct 2014
 *      Author: np183
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"


// The rectangle class
// Serves also as base for Square
// Adds the functions height and width
// to those supported by Shape
// Which functions should be virtual?
// Which should be implemented where?
class Rectangle : public Shape {
public:
	// It should be impossible to create a rectangle without additional data
	Rectangle() {}
	Rectangle(float width, float height, const std::string& borderColor, bool fill=false, const std::string& fillColor="");
	Rectangle(const Rectangle& other) = default;
	Rectangle(Rectangle&& other) = default;
	virtual ~Rectangle() override;

	// Getters and setters for width and height
	float width() const;
	float height() const;
	void setWidth(float width);
	void setHeight(float height);

	// TODO:
	// Choose which functions to implement here
private:
	// TODO:
	// Add member variables
};

#endif /* RECTANGLE_H_ */
