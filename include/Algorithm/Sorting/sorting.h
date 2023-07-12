#ifndef SORTING
#define SORTING

#include "Visualizer/sortvis.h"
#include "Algorithm/algorithm.h"

class Sorting : public Algorithm
{
public:
    Sorting(unsigned int datasize, sf::RenderWindow &window) : mdataSize(datasize), visualizer(window, mdata)
    {
        randomData();
        visualizer.initialize();
    }
    virtual void randomData() override;
    void run() override = 0;

protected:
    std::vector<int> mdata;
    unsigned int mdataSize;
    SortVis visualizer;
};

#endif // SORTING