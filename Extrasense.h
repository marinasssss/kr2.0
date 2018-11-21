#pragma once
#include "Costume.h"

class Extrasense: public Costume{//Экстрасенсорные способности
public:
	explicit Extrasense(){}
	~Extrasense(){}
	const char* getCostume(){return "экстрасенсорные способности";}
};