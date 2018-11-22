#pragma once
#include "Weapon.h"

class Sickle: public Weapon{//סונן באפפט
public:
	explicit Sickle(){}
	~Sickle(){}
	const char* getWeapon(){return "סונן באפפט";}
};