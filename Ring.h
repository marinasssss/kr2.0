#pragma once
#include "Weapon.h"

class Ring: public Weapon{//������ ������� ������
public:
	explicit Ring(){}
	~Ring(){}
	const char* getWeapon(){return "������ ������� ������";}
};