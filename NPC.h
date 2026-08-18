#pragma once
#include "Character.h"
#include <string>

class NPC : public Character
{
private:
    std::string name;

public:
    NPC(std::string startName, int startLooks, int startWill, int startCharisma);

    std::string getName();
};

