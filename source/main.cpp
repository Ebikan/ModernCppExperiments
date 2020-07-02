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

#include <iostream>
#include <chrono>
#include <iomanip>

#include "GameObject.h"

int main(int args) {
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
	return 0;
}