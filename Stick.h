#pragma once
#include "Weapon.h"

class Stick: public Weapon{//������� �������
public:
	explicit Stick(){}
	~Stick(){}
	const char* getWeapon(){return "������� �������";}
};