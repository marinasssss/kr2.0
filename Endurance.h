#pragma once
#include "Costume.h"

class Endurance: public Costume{//������������
public:
	explicit Endurance(){}
	~Endurance(){}
	const char* getCostume(){return "������������";}
};