#pragma once
#include "Movement.h"

class Run: public Movement{//бегает
public:
	explicit Run(){}
	~Run(){}
	const char* getMovement(){return "бегает";}
};