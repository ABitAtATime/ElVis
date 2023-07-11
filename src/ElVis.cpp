#include "ElVis.h"

void ElVis::run() {
    malgorithm.run();
    while (mwindow.isOpen()) {
        sf::Event event;
        while (mwindow.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                mwindow.close();
            }
        }
    }
}