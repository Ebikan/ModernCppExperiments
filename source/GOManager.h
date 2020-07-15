#pragma once
/******************************************************************************

	file:	GOManager.h

	brief:	none

	date:	7/1/2020 11:45:23 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include <array>
#include <forward_list>

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


	// Should be called each frame end, before draw call.
	size_t Destroyer();

	//give access to the iterators
	std::forward_list<GameObject>::const_iterator cbegin(Cat c);
	std::forward_list<GameObject>::iterator begin(Cat c);
	std::forward_list<GameObject>::const_iterator cend(Cat c);
	std::forward_list<GameObject>::iterator end(Cat c);

private:
	// avoiding c-style array, as std::array has bounds checking.
	// using forward list for GO holding, since its iterators do not get invalidated.

	std::array<std::forward_list<GameObject>, static_cast<size_t>(Cat::CategoryCount)> pool;

};
