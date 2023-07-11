#ifndef MERGESORT
#define MERGESORT

#include "Algorithm/Sorting/sorting.h"

class MergeSort : public Sorting
{
public:
    MergeSort(unsigned int datasize, sf::RenderWindow &window) : Sorting(datasize, window)
    {
        randomData();
    }
    void merge(int low, int mid, int high);
    void mergeSort(int low, int high);
    void run() override;
};

#endif