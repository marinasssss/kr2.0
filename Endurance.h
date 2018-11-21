#pragma once
#include "Costume.h"

class Endurance: public Costume{//выносливость
public:
	explicit Endurance(){}
	~Endurance(){}
	const char* getCostume(){return "выносливость";}
};