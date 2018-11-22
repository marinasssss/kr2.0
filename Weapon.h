#pragma once

class Weapon{//абстрактный базовый класс оружия
public:
	explicit Weapon(){}
	virtual ~Weapon(){}
	virtual const char * getWeapon() = 0;//получение способности от оружия
};