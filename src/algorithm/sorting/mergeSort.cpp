#include "Algorithm/Sorting/mergeSort.h"
#include <iostream>
#include <chrono>
#include<thread>

void MergeSort::merge(int low, int mid, int high)
{
    int arr1[mdata.size() / 2 + 1], arr2[mdata.size() / 2 + 1];
    int n1, n2, i, j, k;
    n1 = mid - low + 1;
    n2 = high - mid;

    for (i = 0; i < n1; i++)
        arr1[i] = mdata[low + i];
    for (j = 0; j < n2; j++)
        arr2[j] = mdata[mid + j + 1];

    arr1[n1] = 99999999;
    arr2[n2] = 99999999;

    i = 0;
    j = 0;

    for (k = low; k <= high; k++)
    {
        if (arr1[i] <= arr2[j])
        {
            mdata[k] = arr1[i++];
        }
        else
        {
            mdata[k] = arr2[j++];
        }
    // std::this_thread::sleep_for(std::chrono::milliseconds(1));
        visualizer.update();
        visualizer.draw();
    }
}

void MergeSort::mergeSort(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merge(low, mid, high);
    }
}

void MergeSort::run()
{
    mergeSort(0, mdata.size());
}