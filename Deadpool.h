#pragma once
#include "Weapon.h"

class Deadpool: public Weapon{//остроумие дедпула
public:
	explicit Deadpool(){}
	~Deadpool(){}
	const char* getWeapon(){return "остроумие дедпула";}
};