#pragma once
#include <cstdint>
class LevelUp {
public:
	LevelUp() {
		CurrentLevel = 1u;
		CurrentEXP = 0u;
	}

	void gainEXP(std::uint64_t  gained_exp) {
		CurrentEXP += gained_exp;

	}



protected:
	std::uint16_t CurrentLevel;
	std::uint16_t LevelUpsAvailable;
	std::uint64_t CurrentEXP;

	void check_if_level() {
		if CurrentEXP
	}
};