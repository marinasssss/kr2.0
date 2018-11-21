#pragma once
#include "Weapon.h"

class Claws: public Weapon{//когти росомахи
public:
	explicit Claws(){}
	~Claws(){}
	const char* getWeapon(){return "когти росомахи";}
};