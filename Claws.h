#pragma once
#include "Weapon.h"

class Claws: public Weapon{//����� ��������
public:
	explicit Claws(){}
	~Claws(){}
	const char* getWeapon(){return "����� ��������";}
};