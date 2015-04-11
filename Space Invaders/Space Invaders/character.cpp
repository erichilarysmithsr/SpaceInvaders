#include "stdafx.h"
#include "character.h"


character::character()
{
    maxLives = 1;
    currentLives = 1;
}

character::character(int mLives, int cLives)
{
    maxLives = mLives;
    currentLives = cLives;
}


character::~character()
{
}

void character::setCurrentLives(int newValue)
{
    currentLives = newValue;
}

void character::setMaxLives(int newValue)
{
    maxLives = newValue;
}

int character::getCurrentLives()
{
    return currentLives;
}

int character::getMaxLives()
{
    return maxLives;
}