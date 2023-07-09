#include "Algorithm/Sorting/quicksort.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <random>


int Quicksort::partition(int low , int high)
{
    int pivot = mdata[high];
    int i = low -1;
    for ( int j = low ; j<=high-1 ; j++)
    {
        if(mdata[j] < pivot )
        {
            i++;
            auto temp = mdata[j];
            mdata[j] = mdata[i];
            mdata[i] = temp;
        }
        visualizer.draw();
        visualizer.update();
        
    }
        auto temp = mdata[i+1];
        mdata[i+1] = mdata[high];
        mdata[high] = temp; 
    return (i+1);

}

void Quicksort::quicksort(int low , int high)
{
    if (low < high)
    {
        auto pivotpos = partition(low , high);


        quicksort(low , pivotpos-1);
        quicksort(pivotpos+1,high);
    }
}

void Quicksort::run()  {
    quicksort(0 , mdataSize);
    


}