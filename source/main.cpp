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

#include "GameObject.h"

int main(int args) {
	GOManager manager1, manager2;
	GameObject& go = manager1.AddGO(GOManager::Cat::Players);
	Transform& t = go.AddTransform();

	manager1.AddGO(GOManager::Cat::Hazards);
	manager1.AddGO(GOManager::Cat::Players);
	auto something = manager1.cend(GOManager::Cat::Hazards);
	return 0;
}