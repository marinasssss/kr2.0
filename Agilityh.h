#pragma once
#include "Costume.h"

class Agility: public Costume{//����������
public:
	explicit Agility(){}
	~Agility(){}
	const char* getCostume(){return "����������";}
};