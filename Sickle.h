#pragma once
#include "Weapon.h"

class Sickle: public Weapon{//���� �����
public:
	explicit Sickle(){}
	~Sickle(){}
	const char* getWeapon(){return "���� �����";}
};