#pragma once
#include "includes.h"
#include "Slider.h"
class Adjust
{
private:
	Settings* settings;
	sf::RenderWindow* window;

	SliderSFML* wallSol;
	SliderSFML* wallX;
	SliderSFML* wallWidth;
	SliderSFML* bulletX;
	SliderSFML* bulletY;
	SliderSFML* bulletVel;
	SliderSFML* meshDepth;

	sf::Text* wallSolText;
	sf::Text* wallXText;
	sf::Text* wallWidthText;
	sf::Text* bulletXText;
	sf::Text* bulletYText;
	sf::Text* bulletVelText;
	sf::Text* meshDepthText;

	sf::Font font;

public:
	Adjust(sf::RenderWindow* window, Settings* settings) : window { window }, settings{ settings }{
		wallSol = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 100);
		wallX = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 200);
		wallWidth = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 300);
		bulletX = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 400);
		bulletY = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 500);
		bulletVel = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 600);
		meshDepth = new SliderSFML(300, sf::VideoMode::getDesktopMode().height - 700);

		font.loadFromFile("OpenSans-Regular.ttf");

		wallSolText = new sf::Text("Wall Solidity:", font);
		wallXText = new sf::Text("Wall X:", font);
		wallWidthText = new sf::Text("Wall width:", font);
		bulletXText = new sf::Text("Bullet X:", font);
		bulletYText = new sf::Text("Bullet Y:", font);
		bulletVelText = new sf::Text("Bullet Velocity:", font);
		meshDepthText = new sf::Text("Mesh Depth:", font);

		wallSolText->setFillColor(sf::Color::Cyan);
		wallSolText->setStyle(sf::Text::Bold);
		wallSolText->setPosition(50, sf::VideoMode::getDesktopMode().height - 120);

		wallXText->setFillColor(sf::Color::Cyan);
		wallXText->setStyle(sf::Text::Bold);
		wallXText->setPosition(50, sf::VideoMode::getDesktopMode().height - 220);

		wallWidthText->setFillColor(sf::Color::Cyan);
		wallWidthText->setStyle(sf::Text::Bold);
		wallWidthText->setPosition(50, sf::VideoMode::getDesktopMode().height - 320);

		bulletXText->setFillColor(sf::Color::Cyan);
		bulletXText->setStyle(sf::Text::Bold);
		bulletXText->setPosition(50, sf::VideoMode::getDesktopMode().height - 420);

		bulletYText->setFillColor(sf::Color::Cyan);
		bulletYText->setStyle(sf::Text::Bold);
		bulletYText->setPosition(50, sf::VideoMode::getDesktopMode().height - 520);

		bulletVelText->setFillColor(sf::Color::Cyan);
		bulletVelText->setStyle(sf::Text::Bold);
		bulletVelText->setPosition(50, sf::VideoMode::getDesktopMode().height - 620);

		meshDepthText->setFillColor(sf::Color::Cyan);
		meshDepthText->setStyle(sf::Text::Bold);
		meshDepthText->setPosition(50, sf::VideoMode::getDesktopMode().height - 720);
		

		wallSol->create(20, 100);
		wallX->create(20, 100);
		wallWidth->create(20, 100);
		bulletX->create(20, 100);
		bulletY->create(20, 100);
		bulletVel->create(20, 100);
		meshDepth->create(20, 100);
	};
	void draw();
};

