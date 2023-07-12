#include <Algorithm/Sorting/heapsort.h>

void HeapSort::Heapify(int N, unsigned int i)
{
    auto largest = i;
    auto left = 2 * i + 1;
    auto right = 2 * i + 2;
    if (left < N && mdata[left] > mdata[largest])
    {
        largest = left;
    }
    if (right < N && mdata[right] > mdata[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        auto temp = mdata[i];
        mdata[i] = mdata[largest];
        mdata[largest] = temp;

        HeapSort::Heapify(N, largest);
    }
}
void HeapSort::heapSort()
{
    for (int i = mdataSize / 2 - 1; i >= 0; i--)
    {
        HeapSort::Heapify(mdataSize, i);
    }
    for (int i = mdataSize - 1; i > 0; i--)
    {
        auto temp = mdata[0];
        mdata[0] = mdata[i];
        mdata[i] = temp;
        visualizer.draw();
        visualizer.update();
        HeapSort::Heapify(i, 0);
    }
}
void HeapSort::run()
{
    heapSort();
}