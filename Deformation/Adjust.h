#pragma once
#include "includes.h"
#include "Graphics.h"
class Adjust
{
private:
	Graphics* graphics;
	Settings* settings;
	sf::RenderWindow* window;
public:
	Adjust(sf::RenderWindow* window, Settings* settings) : graphics{ graphics }, settings{ settings }{};
	void handler();
};

