#ifndef BANGBANG_H
#define BANGBANG_H

#include <stdbool.h>

typedef struct {
	// thresholds relative to setpoint
	float highThreshold;
	float lowThreshold;

	bool out;
} BangBangController;

void BangBang_Init(BangBangController* bb);
bool BangBang_Update(BangBangController* bb, float setpoint, float measurement);

#endif
