#pragma once
#include "Movement.h"

class Fly: public Movement{//������
public:
	explicit Fly(){}
	~Fly(){}
	const char* getMovement(){return "������";}
};