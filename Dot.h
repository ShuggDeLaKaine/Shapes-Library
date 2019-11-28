/*!
\file Dot.h
*/
/*! \class Dot
\brief Holds the functions and variables for the library shape Dot, this inherits from Shape class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Dot : public Shape
{
public:
	Dot(sf::Vector2f dCen); //!< Constructor function for the dot with a single variables to be input by the user for the position of the required dot.
	~Dot(); //!< Deconstructor function for dot.

protected:
	sf::Vector2f dotCentre; //!< vector2f variable for the position (on the X and Y axis) of the desired dot.
	void makeShape(); //!< function in which the required steps are taken to make the dot shape.
};