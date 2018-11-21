#pragma once
#include "Costume.h"

class Agility: public Costume{//проворство
public:
	explicit Agility(){}
	~Agility(){}
	const char* getCostume(){return "проворство";}
};