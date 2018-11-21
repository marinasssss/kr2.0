#pragma once
#include "Movement.h"

class Drive: public Movement{//ездит на машине
public:
	explicit Drive(){}
	~Drive(){}
	const char* getMovement(){return "ездит на машине";}
};