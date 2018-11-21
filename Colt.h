#pragma once
#include "Weapon.h"

class Colt: public Weapon{//кольт
public:
	explicit Colt(){}
	~Colt(){}
	const char* getWeapon(){return "кольт";}
};