#pragma once
#include "Costume.h"

class Speed: public Costume{//�������������� ��������
public:
	explicit Speed(){}
	~Speed(){}
	const char* getCostume(){return "�������������� ��������";}
};