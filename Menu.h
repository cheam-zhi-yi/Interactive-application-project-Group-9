#pragma once
#include <iostream>
#include <string> 

class GameMenu {
private:
    bool running;

    void openStates();
    void openDialogueLog(const std::string log[], int count);

public:
    GameMenu();
    void display(const std::string log[], int count);
};
