#pragma once
#include "Costume.h"

class Pilot: public Costume{//���������������� �����
public:
	explicit Pilot(){}
	~Pilot(){}
	const char* getCostume(){return "���������������� �����";}
};