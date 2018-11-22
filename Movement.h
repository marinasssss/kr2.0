#pragma once

class Movement{//абстрактный базовый класс передвижения
public:
	explicit Movement(){}
	virtual ~Movement(){}
	virtual const char * getMovement() = 0;//получение способности от передвижения
};