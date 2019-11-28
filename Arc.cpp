/*!
\file Arc.cpp
*/

#include "Arc.h"

//! Function Arc to take user input values for desired shape, assign them to class variables and run the makeShape(), which in all will render the shape to the window when requested to do in the main.cpp
/*!
\param cenIn a Vector2f to take the desired x, y position for the centre of the shape.
\param radX a integer to take the desired size of the radius on the X axis.
\param radY a integer to take the desired size of the radius on the Y axis.
\param thetaS a integer to take the desired starting angle of the arc.
\param thetaE a integer to take the desired ending angle of the arc. 
\param s a integer that is inheriting from the Shape class integer s.
\return when called to be drawn in the main.cpp this shall render a Arc shape to the window. 
*/
Arc::Arc(sf::Vector2f cenIn, int radX, int radY, int thetaS, int thetaE, int s) : Shape(s)
{
	//initialising the user input variables to this classes variables, which in turn will pass the user inputs into the makeShape(), making the desired shape.
	centre = cenIn;
	radiusX = radX;
	radiusY = radY;
	startTheta = thetaS;
	endTheta = thetaE;
	samples = s;
	//calling the function makeShape() to make the desired shape. In this class, Arc.
	makeShape();
}

Arc::~Arc()
{

}

//! Function makeShape() is a function which takes all the classes variables, which will have been assigned the user inputs in the Arc() function and then using them to create the appropriate shape.
void Arc::makeShape()
{
	//setting the incremental steps for the next line to be drawn and where the starting angle will be
	samples = 0;
	float thetaIncrement = (endTheta - startTheta) / n;
	float theta = startTheta;

	//go through this loop of positioning and drawing the next point/line in the arc shape whilst the current theta value is less that the endTheta value, this will mean the arc will stop when the user requested
	do
	{
		//work out the x,y position of the current point in the curve
		float x = centre.x + std::cos(theta * (3.14 / 180))*radiusX;
		float y = centre.y + std::sin(theta * (3.14 / 180))*radiusY;

		//assign the x,y as a vector2f into the vertex array
		pointsArray[samples] = sf::Vector2f(x, y);

		//increase the theta so next point on arc can be calculated
		theta = theta + thetaIncrement;

		//move to the next point for along the vertex array to filled with the next position information.
		samples++;
	} while (theta < endTheta);
}