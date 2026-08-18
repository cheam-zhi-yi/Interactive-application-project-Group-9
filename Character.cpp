
#include "Character.h"

Character::Character(int startLooks, int startWill, int startCharisma)
{
    setLooks(startLooks);
    setWill(startWill);
    setCharisma(startCharisma);
}

int Character::getLooks()
{
    return  looks;
}

int Character::getWill()
{
    return  will;
}

int Character::getCharisma()
{
    return  charisma;
}

void Character::setLooks(int newLooks)
{
    if (newLooks < 0)
    {
        looks = 0;
    }
    else if (newLooks > 10)
    {
        looks = 10;
    }
    else
    {
        looks = newLooks;
    }
}

void Character::setWill(int newWill)
{
    if (newWill < 0)
    {
        will = 0;
    }
    else if (newWill > 10)
    {
        will = 10;
    }
    else
    {
        will = newWill;
    }

}

void Character::setCharisma(int newCharisma)
{
    if (newCharisma < 0)
    {
        charisma = 0;
    }
    else if (newCharisma > 10)
    {
        charisma = 10;
    }
    else
    {
        charisma = newCharisma;
    }

}

void Character::changeLooks(int amount) {
    setLooks(looks + amount);
}

void Character::changeWill(int amount) {
    setWill(will + amount);
}

void Character::changeCharisma(int amount) {
    setCharisma(charisma + amount);
}