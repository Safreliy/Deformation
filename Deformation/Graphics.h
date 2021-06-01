#pragma once

#include "includes.h"
#include "Calculation.h"
#include "Adjust.h"
class Graphics
{
private:
	int displayWidth;
	int displayHeight;
	sf::RenderWindow* window;
	Calculation* calculation;
	Flags* flags;
	sf::Cursor cursor;
	Settings* settings;
	Adjust* adjust;
public:
	Graphics(sf::RenderWindow* window, Calculation* calculation, Flags* flags, Settings* settings) : calculation(calculation), flags(flags), 
		window(window), settings(settings) {
		initGraph();
	};
	void initGraph();
	void draw();
};

