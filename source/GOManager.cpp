#include "stdafx.h"
/******************************************************************************

	file:	GOManager.cpp

	brief:	none

	date:	7/1/2020 11:45:23 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include "GameObject.h"
#include "GOManager.h"



GOManager::GOManager() noexcept
{
	Trace("ctor GOM");
}

GOManager::~GOManager() noexcept
{
	Trace("dtor GOM");
}

bool IsDestroyGlo(GameObject const& go) noexcept {
	return go.IsDestroy();
}

size_t GOManager::Destroyer() {
	size_t remCnt = 0;
	for (auto& e : pool)
		remCnt += e.remove_if([](GameObject& g) noexcept -> bool { return g.IsDestroy(); } );
	return remCnt;
}

GameObject& GOManager::AddGO(Cat c)
{
	return pool.at(static_cast<int>(c)).emplace_front();
}

std::forward_list<GameObject>::const_iterator GOManager::cbegin(Cat c)
{
	return pool.at(static_cast<int>(c)).cbegin();
}
std::forward_list<GameObject>::iterator GOManager::begin(Cat c)
{
	return pool.at(static_cast<int>(c)).begin();
}
std::forward_list<GameObject>::const_iterator GOManager::cend(Cat c)
{
	return pool.at(static_cast<int>(c)).cend();
}
std::forward_list<GameObject>::iterator GOManager::end(Cat c)
{
	return pool.at(static_cast<int>(c)).end();
}