#pragma once

struct Settings {
	int wallX;
	int wallWidth;
	double wallSol;

	int bulletX;
	int bulletY;
	int bulletVel;

	int meshDepth;
};

struct Flags {
	bool dataIsReady;
	bool dataIsInProcess;
};

#include <thread>
#include <mutex>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>