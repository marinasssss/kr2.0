#pragma once
#include "Weapon.h"

class Melnir: public Weapon{//��������
public:
	explicit Melnir(){}
	~Melnir(){}
	const char* getWeapon(){return "��������";}
};