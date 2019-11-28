/*!
\file Triangle.h
*/
/*! \class Triangle
\brief Holds the functions and variables for the library shape Triangle this inherits from Shape class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle(sf::Vector2f cenTri, int triH); //!< Constructor function for triangle with three variables to be input by the user for the dimensions of the required triangle.
	~Triangle(); //!< Deconstructor function for triangle.

protected:
	sf::Vector2f centrePoint; //!< vector2f variable for the centre position of the desired triangle.
	sf::Vector2f pointA; //!< vector2f variable for the position of the TOP point of the triangle.
	sf::Vector2f pointB; //!< vector2f variable for the position of the BOTTOM RIGHT corner of the triangle.
	sf::Vector2f pointC; //!< vector2f variable for the position of the BOTTOM LEFT corner of the triangle.
	int height; //!< int variable for the overall desired height (replicated on both the X and Y axis's) of the triangle.
	void makeShape(); //!< function in which the required steps are taken to make the trianle shape.
};