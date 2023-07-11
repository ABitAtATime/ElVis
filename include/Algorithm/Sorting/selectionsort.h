#ifndef SELECTIONSORT
#define SELECTIONSORT

#include<iostream>
#include "Algorithm/Sorting/sorting.h"


class SelectionSort : public Sorting
{
public:
    SelectionSort(unsigned int datasize, sf::RenderWindow& window) : Sorting(datasize, window) {
        randomData();
    }
    void selectionsort(int );
    void run() override ;
};

#endif