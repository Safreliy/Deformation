#include "Adjust.h"

void Adjust::draw()
{
	wallSol->draw(*(this->window));
	wallX->draw(*(this->window));
	wallWidth->draw(*(this->window));
	bulletX->draw(*(this->window));
	bulletY->draw(*(this->window));
	bulletVel->draw(*(this->window));
	meshDepth->draw(*(this->window));

	settings->wallSol = wallSol->getSliderValue();
	settings->wallX = wallX->getSliderValue();
	settings->wallWidth = wallWidth->getSliderValue();
	settings->bulletX = bulletX->getSliderValue();
	settings->bulletY = bulletY->getSliderValue();
	settings->bulletVel = bulletVel->getSliderValue();
	settings->meshDepth = meshDepth->getSliderValue();

	window->draw(*wallSolText);
	window->draw(*wallXText);
	window->draw(*wallWidthText);
	window->draw(*bulletXText);
	window->draw(*bulletYText);
	window->draw(*bulletVelText);
	window->draw(*meshDepthText);

}
