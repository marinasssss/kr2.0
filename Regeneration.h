#pragma once
#include "Costume.h"

class Regeneration: public Costume{//способность к регенерации
public:
	explicit Regeneration(){}
	~Regeneration(){}
	const char* getCostume(){return "способность к регенерации";}
};