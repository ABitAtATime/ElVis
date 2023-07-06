#ifndef VISUALIZER
#define VISUALIZER

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Visualizer
{
public:
    Visualizer() {
        window.create(sf::VideoMode(800, 600), "ElVis The algorithm visualizer.");
        width = 800;
        height = 600;
    }

    virtual void draw() = 0;
protected:
    sf::RenderWindow window;
    unsigned int width, height;
};



#endif /* VISUALIZER */