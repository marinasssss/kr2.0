#pragma once
#include "Costume.h"

class Regeneration: public Costume{//����������� � �����������
public:
	explicit Regeneration(){}
	~Regeneration(){}
	const char* getCostume(){return "����������� � �����������";}
};