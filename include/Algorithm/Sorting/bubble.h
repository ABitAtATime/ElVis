#ifndef BUBBLE
#define BUBBLE

#include "Visualizer/sortvis.h"

class Bubble
{
public:
    Bubble(SortVis& visualizer) : visualizer(visualizer) {
        generateRandomData(300, 1, 150);
    }
    void run() ;
private:
    void generateRandomData(size_t dataSize, int minVal, int maxVal);
    std::vector<int> data;
    SortVis& visualizer;
};

#endif