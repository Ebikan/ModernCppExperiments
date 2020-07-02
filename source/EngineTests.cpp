#include "stdafx.h"
/******************************************************************************

	file:	EngineTests.cpp

	brief:	none

	date:	7/2/2020 3:53:46 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include <iostream>
#include <chrono>
#include <iomanip>

#include "GOManager.h"
#include "GameObject.h"

#include "EngineTests.h"





void TenMil1(int args) {
	GOManager manager1, manager2;

	std::chrono::steady_clock clock;
	std::chrono::time_point start = clock.now();

	for (int i = 0; i < 10000000; i++) {
		GameObject& go = manager1.AddGO(GOManager::Cat::Players);
		go.AddTransform();
	}

	std::chrono::time_point end = clock.now();
	std::cout
		<< std::chrono::duration_cast<std::chrono::microseconds>((end - start)).count()
		<< std::endl;


	auto something = manager1.clast(GOManager::Cat::Players);

	manager1.AddGO(GOManager::Cat::Hazards);
	manager1.AddGO(GOManager::Cat::Players);
}