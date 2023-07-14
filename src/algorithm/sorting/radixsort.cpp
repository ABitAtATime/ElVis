#include <Algorithm/Sorting/radixsort.h>

void RadixSort::countSort(int ten)
{
    std::vector<int> output(mdataSize);
    int  count[10] = { 0 };
     int i;
    for (i = 0; i < mdataSize; i++)
    {
        count[(mdata[i] / ten) % 10]++;
    }
    for (i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (i = mdataSize - 1; i >=0; i--)
    {
        output[count[(mdata[i] / ten) % 10] - 1] = mdata[i];
        count[(mdata[i] / ten) % 10] -- ;

    }

    for(i = 0 ; i <mdataSize ; i++)
    {
        mdata[i] = output[i];
        visualizer.update();
        visualizer.draw();
    }
}

void RadixSort::radixSort()
{
    unsigned int m = 0;
    for (unsigned int i = 1; i <= mdataSize; i++)
    {
        if (mdata[i] > mdata[m])
        {
            m = i;
        }
    }
    auto max_data = mdata[m];
    // std::cout << max_data;

    for (int power = 1; max_data / power > 0; power *= 10)
    {
        countSort(power);
    }
}

void RadixSort::run()
{

    radixSort();
    
}