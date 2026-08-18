#pragma once
class Affection
{
	private:
    int rating;

public:
    Affection();

    void IncreaseAffection(int amount);
    void DecreaseAffection(int amount);

    int GetAffection() const;
};

