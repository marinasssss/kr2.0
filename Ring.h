#pragma once
#include "Weapon.h"

class Ring: public Weapon{//кольцо зелёного фонаря
public:
	explicit Ring(){}
	~Ring(){}
	const char* getWeapon(){return "кольцо зелёного фонаря";}
};