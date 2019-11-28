/*!
\file Square.h
*/
/*! \class Square
\brief Holds the functions and variables for the library shape Square, this inherits from Rectangle class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include <Rectangle.h>

class Square : public Rectangle
{
public:
	Square(sf::Vector2f sqCen, int sideLen);  //!< Constructor function for square with three variables to be input by the user for the dimensions of the required square.
	~Square(); //!< Deconstructor function for square.

protected:
	void makeShape(); //!< function in which the required steps are taken to make the square shape.
};
