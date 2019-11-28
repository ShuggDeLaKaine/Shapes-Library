/*!
\file Line.h
*/
/*! \class Line
\brief Holds the functions and variables for the library shape Line, this inherits from Shape class.
*/

#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

class Line : public Shape
{
public:
	Line(int fPX, int fPY, int sPX, int sPY); //!< Constructor function for line with four variables to be input by the user for the dimension and position of the required line.
	~Line(); //!< Deconstructor function for line.

protected:
	int firstPointX; //!< int variable for the position of the starting point of the desired line, on the X axis.
	int firstPointY; //!< int variable for the position of the starting point of the desired line, on the Y axis.
	int secondPointX; //!< int variable for the position of the finishing point of the desired line, on the X axis.
	int secondPointY; //!< int variable for the position of the finishing point of the desired line, on the Y axis.
	void makeShape(); //!< function in which the required steps are taken to make the line shape.
};