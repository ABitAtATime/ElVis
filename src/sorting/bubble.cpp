#include "Algorithm/Sorting/bubble.h"

void Bubble::run()  {
    for (auto left = data.begin(); left != data.end() - 1; ++left ) {
        for (auto right = data.begin() + 1; right != data.end(); ++right) {
            if (*left > *right) {
                auto temp = *left;
                *left = *right;
                *right = temp;
            }
            visualizer.draw();
        }
    }
}