/*!
\file Dot.cpp
*/

#include <Dot.h>

//! Function Dot to take user input, assign them to variables, run makeShape() and used to call and draw this shape in the main.cpp
/*!
\param dCen a Vector2f for the desired X,Y position of the dot. 
\param Shape(1) assigning the number of points required directly, in this case as it is a dot, 1.
\return when called to be drawn in the main.cpp this shall render a Dot shape to the window.
*/
Dot::Dot(sf::Vector2f dCen) : Shape(1)
{
	dotCentre = dCen;
	//calling the function makeShape() to make the desired shape. In this class, Dot.
	makeShape();
}

Dot::~Dot()
{

}

//! Function makeShape() is a function which takes all the classes variables and use them to create the appropriate shape.
void Dot::makeShape()
{
	//assigning the vector to the vertex array
	pointsArray[0] = dotCentre;
}