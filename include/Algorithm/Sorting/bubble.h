#ifndef BUBBLE
#define BUBBLE

#include "Algorithm/Sorting/sorting.h"

class Bubble : public Sorting
{
public:
    Bubble(unsigned int datasize, sf::RenderWindow &window) : Sorting(datasize, window)
    {
        randomData();
    }
    void run() override;
};

#endif