#include "Affection.h"
Affection::Affection()
{
    rating = 0;
}

void Affection::IncreaseAffection(int amount)
{
    rating += amount;
}

void Affection::DecreaseAffection(int amount)
{
    rating -= amount;
}

int Affection::GetAffection() const
{
    return rating;
}