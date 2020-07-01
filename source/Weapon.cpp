#include "stdafx.h"
/******************************************************************************

	file:	Weapon.cpp

	brief:	none

	date:	7/1/2020 11:14:02 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/



#include "Weapon.h"

Weapon::Weapon() noexcept : damage(10.f)
{
	Trace("ctor Weapon");
}

Weapon::~Weapon() noexcept
{
	Trace("dtor Weapon");
}
