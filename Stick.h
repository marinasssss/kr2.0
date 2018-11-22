#pragma once
#include "Weapon.h"

class Stick: public Weapon{//бузиная палочка
public:
	explicit Stick(){}
	~Stick(){}
	const char* getWeapon(){return "бузиная палочка";}
};