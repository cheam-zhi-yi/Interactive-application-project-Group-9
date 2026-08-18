#pragma once
class Character
{
private:
    int looks;
    int will;
    int charisma;

public:
    Character(int looks, int will, int charisma);

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

