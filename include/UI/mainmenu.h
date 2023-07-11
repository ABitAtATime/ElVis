#ifndef MAINMENU
#define MAINMENU

#include <SFML/Graphics.hpp>

namespace NMainMenu {
        enum AlgorithmTypes {
        Sorting,
        PathFinding,
        Invalid,
    };
    enum SortingAlgorithm {
        Bubble,
        Merge,
        Quick,
        Invalid,
    };
    enum State {
        TypeSelecting,
        AlgorithmSelecting,
        OnToVisualization,
    };
}
using namespace NMainMenu;
class MainMenu {
public:
    MainMenu(sf::RenderWindow& window) : window(window) {
        state = State::TypeSelecting;
    }
    void draw() {
        switch (state) {
            case State::TypeSelecting:
                drawTypeSelection();
                checkMouseEvent();

        }
    }
private:
    sf::RenderWindow& window;
    State state;
    int mouseX, mouseY;
private:
    void drawTypeSelection();
    void checkMouseEvent();
};



#endif