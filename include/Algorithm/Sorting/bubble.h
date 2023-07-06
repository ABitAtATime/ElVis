#ifndef BUBBLE
#define BUBBLE

#include "Visualizer/sortvis.h"

class Bubble
{
public:
    Bubble() : visualizer(data) {
        data = std::vector<int> {4, 3, 2, 5, 10, 12, 14, 17, 1, 3, 5, 2, 6, 9};
    }
    void run() ;
private:
    std::vector<int> data;
    SortVis visualizer;
};

#endif