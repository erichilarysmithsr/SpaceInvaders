#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
class character
{
public:
	character();
    character(int mLives, int cLives);
	~character();
    void setCurrentLives(int newValue);
    void setMaxLives(int newValue);
    int getCurrentLives();
    int getMaxLives();
private:
    int maxLives;
    int currentLives;
};

#endif