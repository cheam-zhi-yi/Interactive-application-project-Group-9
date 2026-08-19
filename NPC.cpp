#include "NPC.h"
#include "Affection.h"
NPC::NPC(std::string startName, int startLooks, int startWill, int startCharisma)
    : Character(startLooks, startWill, startCharisma)
{
    name = startName;
}
std::string NPC::getName()
{
    return  name;
    // what should we return?

    
}


Affection& NPC::getAffection()
{
    return rating;
}
