#pragma once

class Costume{//����������� ������� ����� �������
public:
	explicit Costume(){}
	virtual ~Costume(){}
	virtual const char * getCostume() = 0;//��������� ����������� �� �������
};