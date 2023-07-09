#include "Algorithm/Sorting/bubble.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <random>
void Bubble::run()  {
    // std::cout << "test\n";
    for (auto left = mdata.begin(); left != mdata.end() - 1; ++left ) {
        for (auto right = left + 1; right != mdata.end(); ++right) {
            if (*left > *right) {
                auto temp = *left;
                *left = *right;
                *right = temp;
                // std::cout << "test\n";
            }
            visualizer.update();
            visualizer.draw();
            // std::this_thread::sleep_for(std::chrono::milliseconds(10));
            // std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }
}