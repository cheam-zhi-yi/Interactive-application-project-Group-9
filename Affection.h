#pragma once
class Affection
{
private:
    int rating;

public:
    Affection();

    int getRating();

    void increaseAffection(int amount);
    void decreaseAffection(int amount);

    bool checkThreshold();
};

