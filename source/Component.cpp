#include "stdafx.h"
/******************************************************************************

	file:	Component.cpp

	brief:	none

	date:	7/1/2020 11:13:04 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include "Component.h"

COMP_ID Component::idTracker = 0;

COMP_ID Component::NewID() noexcept
{
	// critical state?
	++idTracker;
	// end critical state?

	return idTracker;
}

char const* Component::ComponentException::GetType() const noexcept
{
	return "Component Exception";
}
