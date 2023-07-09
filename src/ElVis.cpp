#include "ElVis.h"

void ElVis::run() {
    std::cout << "test" << std::endl;
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