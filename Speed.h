#pragma once
#include "Costume.h"

class Speed: public Costume{//нечеловеческая скорость
public:
	explicit Speed(){}
	~Speed(){}
	const char* getCostume(){return "нечеловеческая скорость";}
};