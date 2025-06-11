#include <iostream>
#include <string>

enum CountMode {
    PAUSE = 1,
    INCREMENT,
    DECREMENT,
};

CountMode mode = CountMode::PAUSE;

void askChangeMode() {
    char modeChoice;
    std::cout << "What would you like to change the counter type to?" << std::endl;
    std::cout << "1. PAUSE" << std::endl;
    std::cout << "2. INCREMENT" << std::endl;
    std::cout << "3. DECREMENT" << std::endl;
    std::cout << "0. Keep current state" << std::endl;
    std::cout << "> ";
    std::cin >> modeChoice;

    switch (modeChoice) {
    case '1':
        mode = CountMode::PAUSE;
        break;
    case '2':
        mode = CountMode::INCREMENT;
        break;
    case '3':
        mode = CountMode::DECREMENT;
        break;

    default:
        break;
    };

};

int main() {
    int counter = 0;
    while (true) {
        std::cout << "Mode: " << mode << std::endl;
        std::cout << "Counter: " << counter << std::endl;
        askChangeMode();

        switch (mode) {
        case CountMode::INCREMENT:
            counter++;
            break;
        case CountMode::DECREMENT:
            counter--;
            break;

        default:
            break;
        }
    };

    return 0;
};