#pragma once
/******************************************************************************

	file:	GameObject.h

	brief:	none

	date:	7/1/2020 10:48:29 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include <memory>

// Data type
typedef long long GOUID;

// Forward Declaration
typedef class Transform Transform;
typedef class Weapon Weapon;

class GameObject {

public:

	GameObject() noexcept;
	~GameObject() noexcept;
	GameObject(GameObject&&) noexcept;


	GameObject(const GameObject&) = delete;
	GameObject& operator=(const GameObject&) = delete;
	GameObject& operator=(GameObject&&) = delete;

private:
	GOUID id;
	bool destroy;
	bool alive;
	float fData;
	std::unique_ptr<Transform> transform;
	std::unique_ptr<Weapon> weapon;


};
