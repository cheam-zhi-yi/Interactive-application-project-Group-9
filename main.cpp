#include "Menu.h"
#include <iostream>
#include <string> 


int main() {
    GameMenu menu;
    std::string gameInput = "";
    bool gameRunning = true;

    std::cout << "=== WELCOME TO THE GAME ===" << std::endl;

    while (gameRunning) {
        std::cout << "Type 'menu' to open menu,'quit' to quit game:";
        std::cin >> gameInput;


        if (gameInput == "menu") {
            menu.display();
        }
        else if (gameInput == "quit" || gameInput == "Quit") {
            std::cout << "Quitting game. Goodbye!" << std::endl;
            gameRunning = false;
        }
        else {
            std::cout << "Wrong Choice Type 'menu' or 'quit'" << std::endl;
        }
    }

    return 0;
}
