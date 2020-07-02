#pragma once
/******************************************************************************

	file:	Component.h

	brief:	none

	date:	7/1/2020 11:13:04 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include "BaseException.h"

typedef long long COMP_ID;

// Base Class for Components. Should not be created.
class Component {

public:
	class ComponentException : public BaseException {
		using BaseException::BaseException;
		char const* GetType() const noexcept override;
	};

	enum class Name {
		Transform,
		Weapon,
	};

protected:
	// Only allow derived classes to call constructor
	Component() = default;

public:
	~Component() = default;
	Component(const Component&) = delete;
	Component& operator=(const Component&) = delete;
	Component(Component&&) = delete;
	Component& operator=(Component&&) = delete;

protected:
	COMP_ID NewID() noexcept;
	

private:
	static COMP_ID idTracker;
};


