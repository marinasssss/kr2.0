#pragma once
#include "Weapon.h"

class Armor: public Weapon{//����� ��������� ��������
public:
	explicit Armor(){}
	~Armor(){}
	const char* getWeapon(){return "����� ��������� ��������";}
};