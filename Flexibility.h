#pragma once
#include "Costume.h"

class Flexibility: public Costume{//гибкость
public:
	explicit Flexibility(){}
	~Flexibility(){}
	const char* getCostume(){return "гибкость";}
};