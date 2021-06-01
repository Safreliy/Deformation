#include "Graphics.h"
#include "Slider.h"

void Graphics::initGraph()
{
	adjust = new Adjust(window, settings);
	displayWidth = sf::VideoMode::getDesktopMode().width;
	displayHeight = sf::VideoMode::getDesktopMode().height;
	window->create(sf::VideoMode(displayWidth, displayHeight), "Deformation");//sf::Style::Fullscreen)
	window->setFramerateLimit(60);
	window->setActive(false);
	if (cursor.loadFromSystem(sf::Cursor::Arrow))
		window->setMouseCursor(cursor);
}

void Graphics::draw() {

	window->setActive(false);

	sf::CircleShape shape(50);

	// set the shape color to green
	shape.setFillColor(sf::Color(100, 250, 50));
	window->draw(shape);
	while (true) {
		shape.setPosition(settings->wallX, 0);
		adjust->draw();

		window->draw(shape);

		window->display();
		window->clear();
	}
}