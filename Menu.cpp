#include "Menu.h"
#include "Story.h"
#include <iostream>
#include <string> 

GameMenu::GameMenu() {
    running = true;
}

void GameMenu::openStates() {
    std::cout << "--- Status ---" << std::endl;
    //  Code for states need put here
    std::cout << "---------------" << std::endl;
}

void GameMenu::openDialogueLog() {
    std::cout << "--- Story ---" << std::endl;
    // Play through the opening story scene before dropping into the main loop.
    Story story;
    story.run();
    std::cout << "--------------------" << std::endl;
}

void GameMenu::display() {
    std::string choice = "";
    bool inMenu = true;

    while (inMenu) {
        std::cout << "=== GAME MENU ===" << std::endl;
        std::cout << "1. Open States" << std::endl;
        std::cout << "2. Open Story" << std::endl;
        std::cout << "Press 'M' to Close Menu" << std::endl;
        std::cout << "Choice: ";

        std::cin >> choice;

        if (choice == "1") {
            openStates();
        }
        else if (choice == "2") {
            openDialogueLog();
        }
        else if (choice == "m" || choice == "M") {
            std::cout << "Closed Menu, Returned back to game." << std::endl;
            inMenu = false;
        }
        else {
            std::cout << "Wrong choice Enter 1, 2, or 'Menu' to close." << std::endl;
        }
    }
}

