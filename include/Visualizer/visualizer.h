#ifndef VISUALIZER
#define VISUALIZER

#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>


class Visualizer
{
public:
    Visualizer(sf::RenderWindow& windowref) : mwindowref(windowref) {
        mwinwidth = mwindowref.getSize().x;
        mwinheight = mwindowref.getSize().y;
    }
    // virtual void intialize() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void initialize() = 0;
protected:
    sf::RenderWindow& mwindowref;
    unsigned int mwinwidth, mwinheight;
};



#endif /* VISUALIZER */