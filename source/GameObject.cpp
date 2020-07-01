#include "stdafx.h"
/******************************************************************************

	file:	GameObject.cpp

	brief:	none

	date:	7/1/2020 10:48:29 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/


#include "Transform.h"
#include "Weapon.h"
#include "GameObject.h"

GameObject::GameObject() noexcept : id(1u), fData(0.f)
{
	Trace("ctor GO");
}

GameObject::~GameObject() noexcept
{
	Trace("dtor GO");
}

GameObject::GameObject(GameObject&& go) noexcept
{
	Trace("move GO");
	id = std::move(go.id);
	fData = std::move(go.fData);
	transform = std::move(go.transform);
	weapon = std::move(go.weapon);
}

