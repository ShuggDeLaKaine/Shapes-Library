/*!
\file Rectangle.cpp
*/

#include <Rectangle.h>

//! Function Rectangle to take user input, assign them to variables, run makeShape() and used to call and draw this shape in the main.cpp
/*!
\param recCen a Vector2f to take desired x,y position for centre of rectangle.
\param recL a integer to take desired size of the length (X axis) of the rectangle.
\param recH a integer to take desired size of the height (Y axis) of the rectangle.
\param Shape(5) inheriting a definite number of vector2f to be fed into the VertexArray (pointsArray) as a rectangle has 4 corners, plus one more at the start to draw back to and complete the shape. 
\return when called to be drawn in the main.cpp this shall render a Rectangle shape to the window.
*/
Rectangle::Rectangle(sf::Vector2f recCen, int recL, int recH) : Shape(5)
{
	//initialising the user input variables to this classes variables, which in turn will pass the user inputs into the makeShape(), making the desired shape.
	centre = recCen;
	length = recL;
	height = recH;
	//calling the function makeShape() to make the desired shape. In this class, Rectangle.
	makeShape();
}

Rectangle::~Rectangle()
{

}

//! Function makeShape() is a function which takes all the classes variables, which will have been assigned the user inputs in the Rectangle() function and then using them to create the appropriate shape.
void Rectangle::makeShape()
{
	//working out the TopLeft V2f by taking /2 of length and height off the V2f centre
	topLeft.x = centre.x - (length / 2);
	topLeft.y = centre.y + (height / 2);

	//working out TopRight, BottomLeft, BottomRight Vf2s by +/- length and/or height to TopLeft V2f
	topRight.x = topLeft.x + length;
	topRight.y = topLeft.y;

	bottomLeft.x = topLeft.x;
	bottomLeft.y = topLeft.y - height;

	bottomRight.x = topLeft.x + length;
	bottomRight.y = topLeft.y - height;

	//setting the above V2fs to the appropriate pointsArray
	pointsArray[0] = topLeft;
	pointsArray[1] = topRight;
	pointsArray[2] = bottomRight;
	pointsArray[3] = bottomLeft;
	pointsArray[4] = topLeft;
}
