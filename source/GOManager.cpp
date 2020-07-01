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
	pool.resize(static_cast<int>(Cat::CategoryCount));
}

GOManager::~GOManager() noexcept
{
	Trace("dtor GOM");
}

void GOManager::Add(Cat c)
{
	GameObject go;
	pool.at(static_cast<int>(c)).push_back(std::move(go));
}

std::vector<GameObject>::const_iterator GOManager::cbegin(Cat c)
{
	return pool.at(static_cast<int>(c)).cbegin();
}
std::vector<GameObject>::iterator GOManager::begin(Cat c)
{
	return pool.at(static_cast<int>(c)).begin();
}
std::vector<GameObject>::const_iterator GOManager::cend(Cat c)
{
	return pool.at(static_cast<int>(c)).cend();
}
std::vector<GameObject>::iterator GOManager::end(Cat c)
{
	return pool.at(static_cast<int>(c)).end();
}