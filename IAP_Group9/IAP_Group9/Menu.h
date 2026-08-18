#pragma once

class GameMenu {
private:
    bool running;

    void openStates();
    void openDialogueLog();

public:
    GameMenu();
    void display();
};
