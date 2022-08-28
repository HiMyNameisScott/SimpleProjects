#pragma once
#include "hp.h"
#include "statblock.h"

class rogue : public hp, public statBlock {

public:
	static const hptype HPGROWTH = (hptype)13u;
	static const stattype BASESTR = (stattype)3u;
	static const stattype BASEINT = (stattype)2u;

	rogue() : hp(HPGROWTH, HPGROWTH), statBlock(BASESTR, BASEINT) {}

private:

};