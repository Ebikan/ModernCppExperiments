#include "stdafx.h"
/******************************************************************************

	file:	GOManager.cpp

	brief:	none

	date:	7/1/2020 11:45:23 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include <iostream>
#include "GameObject.h"
#include "GOManager.h"

GOManager::GOManager() noexcept
{
	std::cout << "GOM ctor" << std::endl;
}
