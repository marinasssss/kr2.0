#pragma once
#include "Weapon.h"

class Lasso: public Weapon{//����� ������
public:
	explicit Lasso(){}
	~Lasso(){}
	const char* getWeapon(){return "����� ������";}
};