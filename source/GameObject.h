#pragma once
/******************************************************************************

	file:	GameObject.h

	brief:	none

	date:	7/1/2020 10:48:29 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/


class GameObject {

public:

	GameObject() noexcept;
	~GameObject() noexcept;
	GameObject(const GameObject&) = delete;
	GameObject& operator=(const GameObject&) = delete;
	GameObject(GameObject&&) = delete;
	GameObject& operator=(GameObject&&) = delete;

};
