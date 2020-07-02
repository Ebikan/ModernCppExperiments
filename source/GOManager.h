#pragma once
/******************************************************************************

	file:	GOManager.h

	brief:	none

	date:	7/1/2020 11:45:23 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include <vector>

// forward reference
typedef class Component Component;
typedef class GameObject GameObject;

class GOManager {
public:

	// The categories of game objects
	enum class Cat
	{
		Players,
		Projectiles,
		AliveParticles,
		DeadParticles,
		Hazards,
		Tiles,
		CategoryCount,
	};


	GOManager() noexcept;
	~GOManager() noexcept;
	GOManager(const GOManager&) = delete;
	GOManager& operator=(const GOManager&) = delete;
	GOManager(GOManager&&) = delete;
	GOManager& operator=(GOManager&&) = delete;


	GameObject& AddGO(Cat c);


	//give access to the iterators
	std::vector<GameObject>::const_iterator cbegin(Cat c);
	std::vector<GameObject>::iterator begin(Cat c);
	std::vector<GameObject>::const_iterator cend(Cat c);
	std::vector<GameObject>::iterator end(Cat c);

private:
	// avoiding c-style array, as vector has bounds checking.
	std::vector<std::vector<GameObject>> pool;

};
