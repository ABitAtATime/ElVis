#include "Visualizer/sortvis.h"
#include <bits/stdc++.h>


void SortVis::initialize () {
    // idk what to put here for now. maybe later
}


void SortVis::update () {
    sf::Event event;
    while (mwindowref.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mwindowref.close();
        }
    }
}

void SortVis::draw() {
    unsigned int max = *max_element(mdataref.begin(), mdataref.end());
    unsigned int len = mdataref.size();

    const float columnWidth = static_cast<float>(mwinwidth) / len;
        // Clear the mwindowref
        mwindowref.clear();

        // Draw the columns
        for (size_t i = 0; i < len; ++i)
        {
            float columnHeight = (mwinheight * 0.9 ) * mdataref[i] / max;

            // Calculate the position and size of each column
            sf::RectangleShape column(sf::Vector2f(columnWidth, columnHeight));
            column.setPosition(i * columnWidth, mwinheight - columnHeight);
            column.setFillColor(sf::Color::Blue);

            // Draw the column
            mwindowref.draw(column);
        }

        // Display the contents of the mwindowref
        mwindowref.display();
}