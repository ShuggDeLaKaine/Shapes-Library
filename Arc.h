/*!
\file Arc.h
*/
/*! \class Arc
\brief Holds the functions and variables for the library shape Arc, this inherits from Shape class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Arc : public Shape
{
public:
	Arc(sf::Vector2f cenIn, int radX, int radY, int thetaS, int thetaE, int samples); //!< Constructor function for arc with seven variables to be input by the user for the dimensions of the required arc.
	~Arc(); //!< Deconstructor function for arc.

	sf::Vector2f centre; //!< vector2f for the x, y centre position of the arc.
	int radiusX; //!< int variable for the radius size on the X axis.
	int radiusY; //!< int variable for the radius size on the Y axis.
	int startTheta; //!< int variable for the starting degree of the arc.
	int endTheta; //!<  int variable for the ending degree of the arc.
	int samples; //!< int variable for number of points (and therefore lines) required to be drawn for the arc.
protected:
	void makeShape(); //!< function in which the required steps are taken to make the arc shape.
};
