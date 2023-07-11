#include "Algorithm/Sorting/selectionsort.h"
#include <iostream>

void SelectionSort::selectionsort(int n)
{

    int min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mdata[j] < mdata[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            auto temp = mdata[i];
            mdata[i] = mdata[min_index];
            mdata[min_index] = temp;
        }
        visualizer.update();
        visualizer.draw();
    }
}

void SelectionSort::run()
{
    selectionsort(mdataSize);
}