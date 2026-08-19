#pragma once
#include "Character.h"
#incldue "Affection.h"
#include <string>

class NPC : public Character
{
private:
    std::string name;

public:
    NPC(std::string startName, int startLooks, int startWill, int startCharisma);

    std::string getName();
    Affection& getAffection(); //NPC has an affection level
};

