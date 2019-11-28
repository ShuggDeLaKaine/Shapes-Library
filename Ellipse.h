/*!
\file Ellipse.h
*/
/*! \class Ellipse
\brief Holds the functions and variables for the library shape Ellipse, this inherits from Arc class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Arc.h"

class Ellipse : public Arc
{
public:
	Ellipse(sf::Vector2f cenIn, int radX, int radY, int samples); //!< Constructor function for ellipse with four variables to be input by the user for the dimensions of the required ellipse. 
	~Ellipse(); //!< Deconstructor function for ellipse.
protected:
	void makeShape(); //!< function in which the required steps are taken to make the ellipse shape.
};
