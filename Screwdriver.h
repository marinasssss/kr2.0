#pragma once
#include "Weapon.h"

class Screwdriver: public Weapon{//отвёртка доктора
public:
	explicit Screwdriver(){}
	~Screwdriver(){}
	const char* getWeapon(){return "отвёртка доктора";}
};