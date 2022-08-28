#pragma once

#include "hitpoint types.h"



class hp {
public:
	bool setMaxHP(hptype new_max_hp) {
		if (new_max_hp < 1)
			return false;

		maxHp = new_max_hp;

		if (currentHp > maxHp) 
			currentHp = maxHp;
		
			return true;
	}

	hptype	getMaxHp() {
		return maxHp;
	}

	hptype getCurrentHp() {
		return currentHp;
	}

	void takeDamage(hptype damage) {
		if (damage > currentHp) {
			currentHp = 0;
			return;
		}

		currentHp -= damage;
	}

	void heal(hptype amount) {
		currentHp += amount;

		if (currentHp > maxHp) {
			currentHp = maxHp;
		}
	}

	hp() {
		currentHp = 1; 
		maxHp = 1;
	}

	hp(hptype cHP, hptype mHP) {
		currentHp = cHP;
		maxHp = mHP;
		if (currentHp > maxHp) {
			currentHp = maxHp;
		}
	}

private:
	hptype currentHp;
	hptype maxHp;

};