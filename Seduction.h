#pragma once
#include "Costume.h"

class Seduction: public Costume{//�����������
public:
	explicit Seduction(){}
	~Seduction(){}
	const char* getCostume(){return "�����������";}
};