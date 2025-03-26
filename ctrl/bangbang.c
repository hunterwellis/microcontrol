#include "bangbang.h"

void BangBang_Init(BangBangController* bb){
	//clear controller variables
	bb->highThreshold = 0.0f;
	bb->lowThreshold = 0.0f;

	bb->out = false;
}

bool BangBang_Update(BangBangController* bb, float setpoint, float measurement){
	if (measurement > setpoint + bb->highThreshold){
		bb->out = false;
	}
	else if (measurement < setpoint - bb->lowThreshold){
		bb->out = false;
	}
	return bb->out;
}

