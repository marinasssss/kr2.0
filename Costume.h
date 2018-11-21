#pragma once

class Costume{//абстрактный базовый класс костюма
public:
	explicit Costume(){}
	virtual ~Costume(){}
	virtual const char * getCostume() = 0;//получение способности от костюма
};