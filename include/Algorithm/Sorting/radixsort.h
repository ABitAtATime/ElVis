#ifndef RADIX
#define RADIX
#include <Algorithm/Sorting/sorting.h>

class RadixSort : public Sorting
{
public:
    RadixSort(unsigned int datasize, sf::RenderWindow &window) : Sorting(datasize, window)
    {
        randomData();
    }

    void countSort(int);
    void radixSort();
    void run() override;
};

#endif