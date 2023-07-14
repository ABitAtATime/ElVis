#ifndef HEAPSORT
#define HEAPSORT
#include<Algorithm/Sorting/sorting.h>

class HeapSort : public Sorting
{
    public:
        HeapSort(unsigned int datasize , sf::RenderWindow &window) : Sorting (datasize,window)
        {
            randomData();
        }
        void run() override;
        void Heapify(int ,unsigned int);
        void heapSort();

};
#endif 