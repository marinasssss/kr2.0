#pragma once
#include "Weapon.h"

class Melnir: public Weapon{//мьёльнир
public:
	explicit Melnir(){}
	~Melnir(){}
	const char* getWeapon(){return "мьёльнир";}
};