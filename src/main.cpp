#include <iostream>
#include "ElVis.h"
#include "Algorithm/Sorting/quicksort.h"
#include "Algorithm/Sorting/mergeSort.h"
#include "Algorithm/Sorting/bubble.h"

int main()
{
    int input;
    std::string choice;
    std::cout << "Input your choice:" << std::endl;
    std::cout << "1 --- Bubble sort" << std::endl;
    std::cout << "2 --- MergeSort " << std::endl;
    std::cout << "3 --- QuickSort" << std::endl;
    std::cout<<"\n";
    std::cout<<"Enter your Choice:    ";
    std::cin >> input;
    sf::RenderWindow window(sf::VideoMode(1800, 1000), "ElVis");
    if (input == 1)
    {
        Bubble placeholder(900, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    else if (input == 2)
    {
        MergeSort placeholder(900, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    else if (input == 3)
    {
        Quicksort placeholder(900, window);
        ElVis elvis(window, placeholder);
        elvis.run();
    }
    return 0;
}