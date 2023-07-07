#include "Visualizer/sortvis.h"
#include <bits/stdc++.h>


void SortVis::update () {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

void SortVis::draw(std::vector<int>& data_ptr) {
    unsigned int max = *max_element(data_ptr.begin(), data_ptr.end());
    unsigned int len = data_ptr.size();

    const float columnWidth = static_cast<float>(width) / len;
        // Clear the window
        window.clear();

        // Draw the columns
        for (size_t i = 0; i < len; ++i)
        {
            float columnHeight = (height * 0.9 ) * data_ptr[i] / max;

            // Calculate the position and size of each column
            sf::RectangleShape column(sf::Vector2f(columnWidth, columnHeight));
            column.setPosition(i * columnWidth, height - columnHeight);
            column.setFillColor(sf::Color::Blue);

            // Draw the column
            window.draw(column);
        }

        // Display the contents of the window
        window.display();
}