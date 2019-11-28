/*!
\file Triangle.cpp
*/

#include <Triangle.h>

//! Function Rectangle to take user input, assign them to variables, run makeShape() and used to call and draw this shape in the main.cpp
/*!
\param cenTri a Vectro2f to take the desired x,y position for the centre of the triangle.
\param triH a integer to take the desired size of the triangle.
\param Shape(4) assigning the number of points to feed into the Vertex Array (pointsArray) as we know a triangle as 3 corners, plus one point at the start to complete the drawing of the triangle.
\return
*/
Triangle::Triangle(sf::Vector2f cenTri, int triH) : Shape(4)
{
	//initialising the user input variables to this classes variables, which in turn will pass the user inputs into the makeShape(), making the desired shape.
	centrePoint = cenTri;
	height = triH;
	//calling the function makeShape() to make the desired shape. In this class, Triangle.
	makeShape();
}

Triangle::~Triangle()
{

}

void Triangle::makeShape()
{
	//working out Points A, B & C Vf2s by +/- height to Centre Point V2f
	pointA.x = centrePoint.x;
	pointA.y = centrePoint.y - (height / 2);

	pointB.x = centrePoint.x + (height / 2);
	pointB.y = centrePoint.y + (height / 2);

	pointC.x = centrePoint.x - (height / 2);
	pointC.y = centrePoint.y + (height / 2);

	//setting the above V2fs to the appropriate pointsArray
	pointsArray[0] = pointA;
	pointsArray[1] = pointB;
	pointsArray[2] = pointC;
	pointsArray[3] = pointA;
}