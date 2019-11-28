/*!
\file Square.cpp
*/

#include <Square.h>

//! Function Rectangle to take user input, assign them to variables, run makeShape() and used to call and draw this shape in the main.cpp
/*!
\param recCen a Vector2f to take desired x,y position for centre of rectangle.
\param length a integer to take desired size of the length of the sides, as this is a square does not require different variables for length and height as Rectangle does.
\return when called to be drawn in the main.cpp this shall render a Square shape to the window.
*/
Square::Square(sf::Vector2f recCen, int length) : Rectangle(recCen, length, height)
{
	//calling the function makeShape() to make the desired shape. In this class, Square.
	makeShape();
}

Square::~Square()
{

}

//! Function makeShape() is a function which takes all the classes variables and use them to create the appropriate shape.
void Square::makeShape()
{
	//working out the TopLeft V2f by taking /2 of length V2f centre

	topLeft.x = centre.x - (length / 2);
	topLeft.y = centre.y + (length / 2);

	//working out TopRight, BottomLeft, BottomRight Vf2s by +/- length TopLeft V2f
	topRight.x = topLeft.x + length;
	topRight.y = topLeft.y;

	bottomLeft.x = topLeft.x;
	bottomLeft.y = topLeft.y - length;

	bottomRight.x = topLeft.x + length;
	bottomRight.y = topLeft.y - length;

	//setting the above V2fs to the appropriate pointsArray
	pointsArray[0] = topLeft;
	pointsArray[1] = topRight;
	pointsArray[2] = bottomRight;
	pointsArray[3] = bottomLeft;
	pointsArray[4] = topLeft;
}

