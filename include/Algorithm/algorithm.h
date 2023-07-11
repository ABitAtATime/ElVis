#ifndef ALGORITHM
#define ALGORITHM

#include "Visualizer/visualizer.h"

class Algorithm
{
public:
    virtual void randomData() = 0;
    virtual void run() = 0;
};

#endif // ALGORITHM