#pragma once
#include "Costume.h"

class SuperBrain: public Costume{//����� ��
public:
	explicit SuperBrain(){}
	~SuperBrain(){}
	const char* getCostume(){return "������������ ��";}
};