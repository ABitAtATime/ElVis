#ifndef SORTVIS
#define SORTVIS

#include "Visualizer/visualizer.h"

class SortVis : Visualizer {
public:
    SortVis(std::vector<int>& data) : data_ptr{data} {}
    void draw() override ;
private:
    std::vector<int>& data_ptr;
};

#endif