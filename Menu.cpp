#include "Menu.h"
#include <iostream>
#include <string> 

GameMenu::GameMenu() {
    running = true;
}

void GameMenu::openStates() {
    std::cout << "--- States ---" << std::endl;
    //  Code for states need put here
    std::cout << "---------------" << std::endl;
}

void GameMenu::openDialogueLog() {
    std::cout << "--- Dialogue Log ---" << std::endl;
    //  Dialogue place here
    std::cout << "--------------------" << std::endl;
}

void GameMenu::display() {
    std::string choice = "";
    bool inMenu = true;

    while (inMenu) {
        std::cout << "=== GAME MENU ===" << std::endl;
        std::cout << "1. Open States" << std::endl;
        std::cout << "2. Open Dialogue Log" << std::endl;
        std::cout << "Press 'Menu' to Close Menu" << std::endl;
        std::cout << "Choice: ";

        std::cin >> choice;

        if (choice == "1") {
            openStates();
        }
        else if (choice == "2") {
            openDialogueLog();
        }
        else if (choice == "menu" || choice == "Menu") {
            std::cout << "Closed Menu, Returned back to game." << std::endl;
            inMenu = false;
        }
        else {
            std::cout << "Wrong choice Enter 1, 2, or 'Menu' to close." << std::endl;
        }
    }
}

