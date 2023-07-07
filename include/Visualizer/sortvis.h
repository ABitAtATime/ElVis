#ifndef SORTVIS
#define SORTVIS

#include "Visualizer/visualizer.h"

class SortVis : Visualizer {
public:
    SortVis(sf::RenderWindow& window) : Visualizer(window) {}
    // void initialize() override;
    void update() override;
    void draw(std::vector<int>& data) override ;
private:
    // std::vector<int>& data_ptr;
};

#endif