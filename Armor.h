#pragma once
#include "Weapon.h"

class Armor: public Weapon{//броня железного человека
public:
	explicit Armor(){}
	~Armor(){}
	const char* getWeapon(){return "броня железного человека";}
};