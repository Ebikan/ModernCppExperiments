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

// Abstract Class
class Component {

	class ComponentException : public BaseException {
		using BaseException::BaseException;

		virtual char const* GetType() const noexcept;
	};


public:
	
	Component() = delete;
	~Component() = delete;
	Component(const Component&) = delete;
	Component& operator=(const Component&) = delete;
	Component(Component&&) = delete;
	Component& operator=(Component&&) = delete;

protected:
	COMP_ID NewID() noexcept;
	

private:
	static COMP_ID idTracker;
};


