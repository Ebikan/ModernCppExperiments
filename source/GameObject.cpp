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
#include <memory>

GOUID GameObject::idTracker = 0;

bool GameObject::IsDestroy() const noexcept
{
	return destroy;
}

GOUID GameObject::NewID() noexcept
{
	// critical state?
	++idTracker;
	// end critical state?

	return idTracker;
	
}

GameObject::GameObject()  : 
	fData(0.f), alive(false), destroy(false), id(NewID())
{
	//Trace("ctor GO");
}

GameObject::~GameObject() noexcept
{
	//Trace("dtor GO");
}

GameObject::GameObject(GameObject&& go) noexcept
{
	//Trace("move GO");
	id = std::move(go.id);
	destroy = std::move(go.destroy);
	alive = std::move(go.alive);
	fData = std::move(go.fData);
	transform = std::move(go.transform);
	weapon = std::move(go.weapon);
}

GameObject& GameObject::operator=(GameObject&& go) noexcept
{
	if (this->id == go.id) {
		return *this;
	}
	id = std::move(go.id);
	destroy = std::move(go.destroy);
	alive = std::move(go.alive);
	fData = std::move(go.fData);
	transform = std::move(go.transform);
	weapon = std::move(go.weapon);
	return *this;
}



char const* GameObject::Exception::GetType() const noexcept
{
	return "GameObject Exception";
}
