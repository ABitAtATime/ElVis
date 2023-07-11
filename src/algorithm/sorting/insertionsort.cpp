#include "Algorithm/Sorting/insertionsort.h"
#include <iostream>

void InsertionSort::insertionsort(int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = mdata[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key,
        // to one position ahead of their
        // current position
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