#include "Algorithm/Sorting/insertionsort.h"
#include <iostream>

void InsertionSort::insertionsort(int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = mdata[i];
        j = i - 1;

        while (j >= 0 && mdata[j] > key)
        {
            mdata[j + 1] = mdata[j];
            j = j - 1;
        }
        mdata[j + 1] = key;
        visualizer.update();
        visualizer.draw();
    }
}

void InsertionSort::run()
{
    insertionsort(mdataSize);
}