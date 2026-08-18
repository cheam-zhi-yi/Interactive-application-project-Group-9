#include "Player.h"

Player::Player() {
    charisma = 5;
    looks = 5;
    will = 5;
}

int Player::getLooks()
{
    return  looks;
}

int Player::getWill()
{
    return  will;
}

int Player::getCharisma()
{
    return  charisma;
}

void Player::setLooks(int newLooks)
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

void Player::setWill(int newWill)
{
    if(newWill< 0)
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

void Player::setCharisma(int newCharisma)
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

void Player::changeLooks(int amount) {
}
void Player::changeWill(int amount) {
}
void Player::changeCharisma(int amount) {
}