#pragma once
/******************************************************************************

	file:	GameObject.h

	brief:	none

	date:	7/1/2020 10:48:29 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include <memory>
#include "BaseException.h"
#include "Component.h"
#include "Transform.h"

// Data type
typedef long long GOUID;

// Forward Declaration
typedef class Transform Transform;
typedef class Weapon Weapon;

class GameObject {

public:

	class Exception : public BaseException
	{
	public:
		using BaseException::BaseException;
		char const* GetType() const noexcept override;
	};

	GameObject() ;
	~GameObject() noexcept;
	GameObject(GameObject&&) noexcept;


	GameObject(const GameObject&) = delete;
	GameObject& operator=(const GameObject&) = delete;
	GameObject& operator=(GameObject&&) = delete;

	template <typename... Args>
	Transform& AddTransform(Args... args);
	template <typename... Args>
	Weapon& AddWeapon(Args... args);

protected:
	GOUID NewID() noexcept;

private:
	static GOUID idTracker;
	
	GOUID id;
	bool destroy;
	bool alive;
	float fData;
	std::unique_ptr<Transform> transform;
	std::unique_ptr<Weapon> weapon;
};


template <typename... Args>
Transform& GameObject::AddTransform(Args... args) {
	transform = std::make_unique<Transform>(args...);
	return *transform.get();
}
template <typename... Args>
Weapon& GameObject::AddWeapon(Args... args) {
	weapon = std::make_unique<Weapon>(args...);
	return *weapon.get();
}

