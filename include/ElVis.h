#ifndef ELVIS
#define ELVIS

#include <SFML/Graphics.hpp>

#include "Algorithm/algorithm.h"



class ElVis
{
public:
    ElVis(sf::RenderWindow& window, Algorithm& algorithm) : mwindow(window), malgorithm(algorithm) {
    }
    void run();
private:
    Algorithm& malgorithm;
    sf::RenderWindow& mwindow;
};


#endif