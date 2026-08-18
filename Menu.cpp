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

// Creates saved history using a loop
void GameMenu::openDialogueLog(const std::string log[], int count) {
    std::cout << "--- Dialogue Log ---" << std::endl;

    if (count == 0) {
        std::cout << "No dialogue recorded yet." << std::endl;
    }
    else {
        for (int i = 0; i < count; i++) {
            std::cout << log[i] << std::endl;
        }
    }

    std::cout << "--------------------" << std::endl;
}

void GameMenu::display(const std::string log[], int count) {
    std::string choice = "";
    bool inMenu = true;


    while (inMenu) {
        std::cout << "=== GAME MENU ===" << std::endl;
        std::cout << "1. Open States" << std::endl;
        std::cout << "2. Open Dialogue Log" << std::endl;
        std::cout << "Press 'M' to Close Menu" << std::endl;
        std::cout << "Choice: ";

        std::cin >> choice;

        if (choice == "1") {
            openStates();
        }
        else if (choice == "2") {
 
            openDialogueLog(log, count);
        }
        else if (choice == "M" || choice == "m") {
            std::cout << "Closed Menu, Returned back to game." << std::endl;
            inMenu = false;
        }
        else {
            std::cout << "Wrong choice Enter 1, 2, or 'M' to close." << std::endl;
        }
    }
}
