#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
class character
{
public:
	character();
	~character();
private:
	int maxHealth;
	int currentHealth;
	int weaponDamage;
};

#endif