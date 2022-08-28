#pragma once
#include "hp.h"
#include "statblock.h"

class warrior : public hp, public statBlock {

public:
	static const hptype HPGROWTH = (hptype)19u;
	static const stattype BASESTR = (stattype)4u;
	static const stattype BASEINT = (stattype)1u;

	warrior() : hp(HPGROWTH, HPGROWTH), statBlock(BASESTR, BASEINT) {}

private:

};