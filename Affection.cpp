#include "Affection.h"
Affection::Affection()
{
    rating = 5;
}

int Affection::getRating()
{
    return rating;
}

void Affection::increaseAffection(int amount)
{
    rating += amount;
}

void Affection::decreaseAffection(int amount)
{
    rating -= amount;
}

bool Affection::checkThreshold()
{
    if (rating >= 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}
