#pragma once
/******************************************************************************

	file:	Weapon.h

	brief:	none

	date:	7/1/2020 11:14:02 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/


class Weapon {

public:

	Weapon() noexcept;
	~Weapon() noexcept;
	Weapon(const Weapon&) = delete;
	Weapon& operator=(const Weapon&) = delete;
	Weapon(Weapon&&) = delete;
	Weapon& operator=(Weapon&&) = delete;

private:
	float damage;
};
