#include "stdafx.h"
/******************************************************************************

	file:	Transform.cpp

	brief:	none

	date:	7/1/2020 11:13:16 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/



#include "Transform.h"


Transform::Transform() noexcept : global(1.f), local(0.f)
{
	Trace("ctor Transform");
}

Transform::~Transform() noexcept
{
	Trace("dtor Transform");
}
