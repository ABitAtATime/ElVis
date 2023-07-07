#include "Visualizer/visualizer.h"
#include "Algorithm/Sorting/bubble.h"
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "ElVis");
    // std::cout << "test";
    auto visualizer = SortVis(window);
    auto bubble = Bubble(visualizer);
    bubble.run(); 
    return 0;
}