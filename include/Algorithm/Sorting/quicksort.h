#ifndef QUICKSORT
#define QUICKSORT

#include "Algorithm/Sorting/sorting.h"

class Quicksort : public Sorting
{
public:
    Quicksort(unsigned int datasize, sf::RenderWindow &window) : Sorting(datasize, window)
    {
        randomData();
    }
    void run() override;
    int partition(int, int);
    void quicksort(int, int);
};

#endif