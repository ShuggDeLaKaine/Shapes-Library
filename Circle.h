/*!
\file Circle.h
*/
/*! \class Circle
\brief Holds the functions and variables for the library shape Circle, this inherits from Ellipse class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Ellipse.h"

class Circle : public Ellipse
{
public:
	Circle(sf::Vector2f cenIn, int rad, int samples); //!< Constructor function for circle with three variables to be input by the user for the dimensions of the required circle.
	~Circle(); //!< Deconstructor function for circle.
protected:
	void makeShape(); //!< function in which the required steps are taken to make the circle shape.
};