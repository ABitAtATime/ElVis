#ifndef INSERTIONSORT
#define INSERTIONSORT

#include<iostream>
#include "Algorithm/Sorting/sorting.h"


class InsertionSort : public Sorting
{
public:
    InsertionSort(unsigned int datasize, sf::RenderWindow& window) : Sorting(datasize, window) {
        randomData();
    }
    void insertionsort(int );
    void run() override ;
};

#endif