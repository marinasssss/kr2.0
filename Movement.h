#pragma once

class Movement{//����������� ������� ����� ������������
public:
	explicit Movement(){}
	virtual ~Movement(){}
	virtual const char * getMovement() = 0;//��������� ����������� �� ������������
};