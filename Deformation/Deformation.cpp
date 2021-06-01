#include "includes.h"
#include "Adjust.h"
#include "Graphics.h"
#include "Calculation.h"

using namespace std;
int main()
{
    sf::RenderWindow* window = new sf::RenderWindow;
    Flags* flags = new Flags;
    Settings* settings = new Settings;
    Calculation* calculation = new Calculation(settings, flags);
    Graphics* graphics = new Graphics(window, calculation, flags, settings);
    
    thread calcThread([&]() {
        calculation->process();
    });

    thread graphThread([&]() {
        graphics->draw();
    });

    /*thread adjThread([&]() {
        adjust->handler();
    });*/

    graphThread.join();
    calcThread.join();
    //adjThread.join();
}

