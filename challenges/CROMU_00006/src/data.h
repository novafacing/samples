#pragma once
#include "block.h"
#include "charter.h"

void each(data_package, void (^block)(uint32 index, uint32 value));
