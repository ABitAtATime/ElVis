#include "Visualizer/visualizer.h"
#include "Algorithm/Sorting/bubble.h"
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 900), "ElVis");
    // std::cout << "test";
    auto visualizer = SortVis(window);
    auto bubble = Bubble(visualizer);
    bubble.run();
    while (window.isOpen()) {
        visualizer.update();
    } 
    return 0;
}