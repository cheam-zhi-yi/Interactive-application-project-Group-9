#pragma once

class Player
{
private:
    int looks;
    int will;
    int charisma;

public:
    Player();

    //getter
    int getLooks();
    int getWill();
    int getCharisma();

    //allow changing stats
    void setLooks(int newLooks);
    void setWill(int newWill);
    void setCharisma(int newCharisma);

    //easy changing of stats
    void changeLooks(int amount);
    void changeWill(int amount);
    void changeCharisma(int amount);
};

