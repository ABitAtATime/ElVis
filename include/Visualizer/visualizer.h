#ifndef VISUALIZER
#define VISUALIZER

#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>

class Visualizer
{
public:
    Visualizer(sf::RenderWindow& window) : window(window) {
        width = window.getSize().x;
        height = window.getSize().y;
    }
    // virtual void intialize() = 0;
    virtual void update() = 0;
    virtual void draw(std::vector<int>& data) = 0;
protected:
    sf::RenderWindow& window;
    unsigned int width, height;
};



#endif /* VISUALIZER */