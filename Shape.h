/*!
\file Shape.h
*/
/*! \class Shape
\brief Holds the functions and variables for the Shape class, this inherits from the sf::Drawable class.
*/

#pragma once
#include "SFML/Graphics.hpp"

class Shape : public sf::Drawable 
{
public:
	Shape(int numVerts); //!< Constructor function for the Shape class with a single parameter.
	~Shape(); //!< Deconstructor function for shape.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!< Function to Draw the intended shape target in the main program, as well as extendability to alter the state of the shape, for instance its transformation. 
protected:
	sf::VertexArray pointsArray; //!< a vertex arry to hold the required number of vector2fs of the desired shape.
	int n; //!< int variable to hold number of vectors required in the vertex array.
	virtual void makeShape() = 0; //!< a virtual function which will be the basis of a function in each of this classes inheriting classes.
};