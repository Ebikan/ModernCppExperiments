#include "stdafx.h"
/******************************************************************************

	file:	main.cpp

	brief:	none

	date:	6/29/2020 10:31:08 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include "UniqueTests.h"
#include "GOManager.h"

int main(int args) {
	GOManager manager1, manager2;
	manager1.Add(GOManager::Cat::Players);
	manager1.Add(GOManager::Cat::Hazards);
	auto something = manager1.cend(GOManager::Cat::Hazards);
	return 0;
}