#pragma once
#include "Movement.h"

class Drive: public Movement{//����� �� ������
public:
	explicit Drive(){}
	~Drive(){}
	const char* getMovement(){return "����� �� ������";}
};