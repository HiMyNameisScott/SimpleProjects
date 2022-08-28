#pragma once
#include "hp.h"
#include "statblock.h"

class wizard : public hp, public statBlock {

public:
	static const hptype HPGROWTH = (hptype)10u;
	static const stattype BASESTR = (stattype)1u;
	static const stattype BASEINT = (stattype)4u;

	wizard() : hp(HPGROWTH, HPGROWTH), statBlock(BASESTR, BASEINT) {}

private:

};