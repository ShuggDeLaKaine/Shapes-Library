/*!
\file Ellipse.cpp
*/

#include "Ellipse.h"

//! Function Ellipse to take user input values for desired shape, assign them to class variables and run the makeShape(), which in all will render the shape to the window when requested to do in the main.cpp
/*!
\param cenIn a Vector2f to take the desired x, y position for the centre of the shape.
\param radX a integer to take the desired size of the radius on the X axis.
\param radY a integer to take the desired size of the radius on the Y axis.
\param s a integer that is inheriting from the Shape class integer s.
\return when called to be drawn in the main.cpp this shall render a Ellipse shape to the window.
*/
Ellipse::Ellipse(sf::Vector2f cenIn, int radX, int radY, int s) : Arc(cenIn, radX, radY, 0, 360, s)
{
	//calling the function makeShape() to make the desired shape. In this class, Ellipse.
	makeShape();
}

Ellipse::~Ellipse()
{

}

//! Function makeShape() is a function which takes all the classes variables and use them to create the appropriate shape.
void Ellipse::makeShape()
{
	float thetaIncrement = 360 / n;
	float theta = 0;

	//for loop, that whilst i < n (n being number of points the user has requested for the shape) the loop will work out the x,y position at the current increment and pass that onto the vertex array
	for (int i = 0; i < n; i++)
	{
		//work out the x,y position of the current point in the ellipse
		float x = centre.x + std::cos(theta)*radiusX;
		float y = centre.y + std::sin(theta)*radiusY;

		//assign the x,y as a vector2f into the vertex array
		pointsArray[i] = sf::Vector2f(x, y);
		//increase the theta so next point on arc can be calculated
		theta = theta + thetaIncrement;
	}
}