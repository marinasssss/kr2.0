#pragma once
#include "Weapon.h"

class Screwdriver: public Weapon{//������� �������
public:
	explicit Screwdriver(){}
	~Screwdriver(){}
	const char* getWeapon(){return "������� �������";}
};