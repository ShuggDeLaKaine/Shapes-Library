/*!
\file Rectangle.h
*/
/*! \class Rectangle
\brief Holds the functions and variables for the library shape Rectangle, this inherits from Shape class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(sf::Vector2f recCen, int recL, int recH); //!< Constructor function for rectangle with four variables to be input by the user for the dimensions of the required rectangle.
	~Rectangle(); //!< Deconstructor function for rectangle.

protected:
	sf::Vector2f centre; //!< vector2f variable for the centre position of the desired rectangle.
	sf::Vector2f topLeft; //!< vector2f variable for the position of the TOP LEFT corner of the rectangle.
	sf::Vector2f topRight; //!< vector2f variable for the position of the TOP RIGHT corner of the rectangle.
	sf::Vector2f bottomLeft; //!< vector2f variable for the position of the BOTTOM LEFT corner of the rectangle.
	sf::Vector2f bottomRight; //!< vector2f variable for the position of the BOTTOM RIGHT corner of the rectangle.
	int length; //!< int variable for the desired length (on the X axis) of the rectangle.
	int height; //!< int variable for the desired height (on the Y axis) of the rectangle.
	void makeShape(); //!< function in which the required steps are taken to make the rectangle shape.
};