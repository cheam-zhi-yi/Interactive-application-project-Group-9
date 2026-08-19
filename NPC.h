#pragma once
#include "Character.h"
#include "Affection.h"
#include <string>

class NPC : public Character
{
private:
    std::string name;
    Affection affection
public:
    NPC(std::string startName, int startLooks, int startWill, int startCharisma);

    std::string getName();
    Affection& getAffection(); //NPC has an affection level
};

