#include "Algorithm/Sorting/bubble.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <random>
void Bubble::run()  {
    // std::cout << "test\n";
    for (auto left = data.begin(); left != data.end() - 1; ++left ) {
        for (auto right = left + 1; right != data.end(); ++right) {
            if (*left > *right) {
                auto temp = *left;
                *left = *right;
                *right = temp;
                // std::cout << "test\n";
            }
            visualizer.update();
            visualizer.draw(data);
            // std::this_thread::sleep_for(std::chrono::milliseconds(10));
            // std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }
}

void Bubble::generateRandomData(size_t dataSize, int minVal, int maxVal) {
        // Clear existing data
        data.clear();

        // Random number generator
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distribution(minVal, maxVal);

        // Generate random data
        for (size_t i = 0; i < dataSize; ++i) {
            data.push_back(distribution(gen));
        }
    }