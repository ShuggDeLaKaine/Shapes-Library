/*!
\file Line.cpp
*/

#include <Line.h>

//! Function Line to take user input, assign them to variables, run makeShape() and used to call and draw this shape in the main.cpp
/*!
\param fPX an integer to take the desired X position of the starting point of the line.
\param fPY an integer to take the desired Y position of the starting point of the line.
\param sPX an integer to take the desired X position of the ending point of the line.
\param sPY an integer to take the desired Y position of the ending point of the line.
\param Shape(2) assigning the number of points to feed into the Vertex Array (pointsArray) as a line has 2, a start and end. 
\return when called to be drawn in the main.cpp this shall render a Line shape to the window.
*/
Line::Line(int fPX, int fPY, int sPX, int sPY) : Shape(2)
{
	//initialising the user input variables to this classes variables, which in turn will pass the user inputs into the makeShape(), making the desired shape.
	firstPointX = fPX;
	firstPointY = fPY;
	secondPointX = sPX;
	secondPointY = sPY;
	//calling the function makeShape() to make the desired shape. In this class, Line.
	makeShape();
}

Line::~Line()
{

}

//! Function makeShape() is a function which takes all the classes variables and use them to create the appropriate shape.
void Line::makeShape()
{
	//here we are assigning the X,Y positions for start and end of the line and assigning them to the vertex arrya pointsArray.
	pointsArray[0] = sf::Vector2f(firstPointX, firstPointY);
	pointsArray[1] = sf::Vector2f(secondPointX, secondPointY);
}