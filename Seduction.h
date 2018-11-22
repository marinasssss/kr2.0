#pragma once
#include "Costume.h"

class Seduction: public Costume{//соблазнение
public:
	explicit Seduction(){}
	~Seduction(){}
	const char* getCostume(){return "соблазнение";}
};