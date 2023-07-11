#include "Algorithm/Sorting/bubble.h"
#include <iostream>

void Bubble::run()  {
    for (auto left = mdata.begin(); left != mdata.end() - 1; ++left ) {
        for (auto right = left + 1; right != mdata.end(); ++right) {
            if (*left > *right) {
                auto temp = *left;
                *left = *right;
                *right = temp;
            }
            visualizer.update();
            visualizer.draw();
        }
    }
}