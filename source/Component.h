#pragma once
/******************************************************************************

	file:	Component.h

	brief:	none

	date:	7/1/2020 11:13:04 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

// Abstract Class
class Component {

public:
	
	Component() = delete;
	~Component() = delete;
	Component(const Component&) = delete;
	Component& operator=(const Component&) = delete;
	Component(Component&&) = delete;
	Component& operator=(Component&&) = delete;







};
