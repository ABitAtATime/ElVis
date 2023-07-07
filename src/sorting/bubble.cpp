#include "Algorithm/Sorting/bubble.h"
#include <iostream>
#include <chrono>
#include <thread>

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
            std::this_thread::sleep_for(std::chrono::milliseconds(40));
        }
    }
    for (auto x : data ) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;
}