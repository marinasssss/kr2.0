#pragma once
#include "Costume.h"

class Extrasense: public Costume{//Ёкстрасенсорные способности
public:
	explicit Extrasense(){}
	~Extrasense(){}
	const char* getCostume(){return "экстрасенсорные способности";}
};