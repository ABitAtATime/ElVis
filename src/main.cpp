#include <iostream>

#include "ElVis.h"
#include "Algorithm/Sorting/bubble.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 900), "ElVis");
    Bubble bubble(100, window);
    ElVis elvis(window, bubble);
    elvis.run();
    return 0;
}