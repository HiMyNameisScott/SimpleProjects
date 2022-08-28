#pragma once
#include "hp.h"
#include "statblock.h"
#include "LevelSystem.h"

class cleric : public hp, public statBlock, public LevelUp {

public:
	static const hptype HPGROWTH = (hptype)14u;
	static const stattype BASESTR = (stattype)2u;
	static const stattype BASEINT = (stattype)3u;

	cleric() : hp(HPGROWTH, HPGROWTH), statBlock(BASESTR, BASEINT) {}

private:

};
