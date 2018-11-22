#pragma once
#include "Costume.h"

class Pilot: public Costume{//профессиональный пилот
public:
	explicit Pilot(){}
	~Pilot(){}
	const char* getCostume(){return "профессиональный пилот";}
};