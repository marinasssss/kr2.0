#pragma once
#include "Weapon.h"

class Colt: public Weapon{//�����
public:
	explicit Colt(){}
	~Colt(){}
	const char* getWeapon(){return "�����";}
};