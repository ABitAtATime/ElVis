#include <iostream>
#include "ElVis.h"
#include "Algorithm/Sorting/quicksort.h"
#include "Algorithm/Sorting/mergeSort.h"
#include "Algorithm/Sorting/selectionsort.h"
#include "Algorithm/Sorting/insertionsort.h"

#include "Algorithm/Sorting/bubble.h"

int main()
{
    int input;
    std::string choice;
    std::cout << "Input your choice:" << std::endl;
    std::cout << "1 --- Bubble sort" << std::endl;
    std::cout << "2 --- Merge Sort " << std::endl;
    std::cout << "3 --- Quick Sort" << std::endl;
    std::cout << "4 --- Selection Sort" << std::endl;
    std::cout << "5 --- Insertion Sort" << std::endl;

    std::cout << "\n";
    std::cout << "Enter your Choice:    ";
    std::cin >> input;
    sf::RenderWindow window(sf::VideoMode(1820, 990), "ElVis");
    if (input == 1)
    {
        Bubble placeholder(1000, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    else if (input == 2)
    {
        MergeSort placeholder(1000, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    else if (input == 3)
    {
        Quicksort placeholder(1000, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    else if (input == 4)
    {
        SelectionSort placeholder(1000, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    else if (input == 5)
    {
        InsertionSort placeholder(1000, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    return 0;
}