#pragma once

class Weapon{//����������� ������� ����� ������
public:
	explicit Weapon(){}
	virtual ~Weapon(){}
	virtual const char * getWeapon() = 0;//��������� ����������� �� ������
};