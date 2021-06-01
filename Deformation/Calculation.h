#pragma once
#include "includes.h"

class Calculation
{
private:
	Settings* settings;
	Flags* flags;
public:
	Calculation(Settings* settings, Flags* flags) : settings{ settings }, flags{ flags } {};
	void process();
};

