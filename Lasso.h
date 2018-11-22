#pragma once
#include "Weapon.h"

class Lasso: public Weapon{//лассо правды
public:
	explicit Lasso(){}
	~Lasso(){}
	const char* getWeapon(){return "лассо правды";}
};