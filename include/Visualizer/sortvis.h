#ifndef SORTVIS
#define SORTVIS

#include "Visualizer/visualizer.h"

class SortVis : Visualizer {
public:
    SortVis(sf::RenderWindow& window, std::vector<int>& dataref) : Visualizer(window), mdataref(dataref) {}
    void initialize() override;
    void update() override;
    void draw() override ;
private:
    std::vector<int>& mdataref;
};

#endif