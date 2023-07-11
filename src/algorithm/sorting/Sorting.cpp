#include <random>

#include "Algorithm/Sorting/sorting.h"

void Sorting::randomData() {
    mdata.clear();

        // Random number generator
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distribution(0, 1000);

        // Generate random data
        for (size_t i = 0; i < mdataSize; ++i) {
            mdata.push_back(distribution(gen));
        }
}