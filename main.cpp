#include "Menu.h"
#include "Story.h"
#include "NPC.h"
#include "Player.h"
#include "Affection.h"
#include <iostream>
#include <string>

int main() {

    // Player character
    Player player;

    // Party NPCs
    NPC sirius("Sirius Lensworth", 8, 9, 6);
    NPC celestine("Celestine", 9, 7, 10);
    NPC mara("Mara", 7, 10, 7);

    // Affection trackers, one per NPC, all starting at 0
    Affection siriusAffection;
    Affection celestineAffection;
    Affection maraAffection;

    GameMenu menu;
    std::string gameInput = "";
    bool gameRunning = true;

    std::cout << "=== WELCOME TO THE GAME ===" << std::endl;


    while (gameRunning) {
        std::cout << "press 'M' to open menu,'quit' to quit game:";
        std::cin >> gameInput;


        if (gameInput == "M" || gameInput == "m") {
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
