#pragma once
#include "Movement.h"

class Run: public Movement{//������
public:
	explicit Run(){}
	~Run(){}
	const char* getMovement(){return "������";}
};