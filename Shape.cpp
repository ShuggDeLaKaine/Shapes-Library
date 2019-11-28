/*!
\file Shape.cpp
*/

#include "Shape.h"
#include <iostream>;
using namespace std;

//! Function Shape 
/*!
\param numVerts an integer that will hold the required number of vector points for each inheriting shape in the pointsArray.
*/
Shape::Shape(int numVerts)
{
	n = numVerts;
	//setting the points array to join each point with a line
	pointsArray.setPrimitiveType(sf::LinesStrip);
	//setting the pointsArray to be resized as necessary, passing the int n along to the inheriting classes.  
	pointsArray.resize(n);
}

Shape::~Shape()
{

}

//! Function draw
/*!
/param target a sf::RenderTarget allows the target to drawn in the main window. The targets in question will be the inheriting classes
/param states a sf::RenderStates allows the chosen target to have a number of states to be changed, particularly its transformation.
/return should render the 'target' to the main window when draw() called in the main.cpp
*/
void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pointsArray);
}