#pragma once
#include "stattypes.h"

class statBlock
{
	stattype Intellect; // size 0xff
	stattype Strength;  // size 0xff  

public:
	statBlock() { 
		Strength = (stattype)1u; 
		Intellect = (stattype)1u; 
	};

	explicit statBlock(stattype s, stattype i) {
		Strength = s;
		Intellect = i;
	}

	stattype getStrength() { return Strength;  }
	stattype getIntellect() { return Intellect; }
	
};