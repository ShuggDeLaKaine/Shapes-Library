/*! \file main.cpp
 * \brief Main file for the application
 *
 * Contains the entry point for the application, references to classes,
 * rendering the main window, drawing the shapes from the library and displaying them.
 */

/*! \mainpage Lab Exercise 2-4 - Shapes Library - Assignment One
 * This is a simple library for a number of shapes, including Arc, Ellipse, Circle, 
 * Rectangle, Square, Trianle, Line and Dot.
 * This program when ran will call, draw and display an example of each shape in a single window.
 */

#include "SFML/Graphics.hpp"
#include <Shape.h>
#include <Arc.h>
#include <Ellipse.h>
#include <Circle.h>
#include <Line.h>
#include <Dot.h>
#include <Rectangle.h>
#include <Square.h>
#include <Triangle.h>

int main() //!< Entry point for the application
{
	sf::RenderWindow mainWindow(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	mainWindow.setFramerateLimit(60);
	
	Circle myCircle(sf::Vector2f(150,300), 100, 60);
	Ellipse myEllipse(sf::Vector2f(150, 100), 120, 60, 60);
	Arc myArc(sf::Vector2f(80,280), 300, 200, 60, 90, 30);
	Line myLine(700, 50, 800, 200);
	Dot myDot(sf::Vector2f(750, 350));
	Rectangle myRectangle(sf::Vector2f(500, 100), 200, 100);
	Square mySquare(sf::Vector2f(500, 250), 100);
	Triangle myTriangle(sf::Vector2f(500, 400), 100);

	while (mainWindow.isOpen())
	{
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				mainWindow.close();
			}
		}

		

		mainWindow.clear(sf::Color::Black);

		mainWindow.draw(myCircle);
		mainWindow.draw(myEllipse);
		mainWindow.draw(myArc);
		mainWindow.draw(myLine);
		mainWindow.draw(myDot);
		mainWindow.draw(myRectangle);
		mainWindow.draw(mySquare);
		mainWindow.draw(myTriangle);

		mainWindow.display();
	}
}
