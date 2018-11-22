#pragma once
#include "Movement.h"

class Fly: public Movement{//летает
public:
	explicit Fly(){}
	~Fly(){}
	const char* getMovement(){return "летает";}
};