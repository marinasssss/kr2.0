#pragma once
#include "Weapon.h"

class Deadpool: public Weapon{//��������� �������
public:
	explicit Deadpool(){}
	~Deadpool(){}
	const char* getWeapon(){return "��������� �������";}
};