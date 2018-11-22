#pragma once
#include "Costume.h"

class SuperBrain: public Costume{//супер ум
public:
	explicit SuperBrain(){}
	~SuperBrain(){}
	const char* getCostume(){return "феноменалный ум";}
};