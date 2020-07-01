#pragma once
/******************************************************************************

	file:	GOManager.h

	brief:	none

	date:	7/1/2020 11:45:23 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include <vector>
#include <forward_list>

// forward reference
class GameObject;

class GOManager {
public:



	GOManager() noexcept;
	~GOManager() = default;
	GOManager(const GOManager&) = delete;
	GOManager& operator=(const GOManager&) = delete;
	GOManager(GOManager&&) = delete;
	GOManager& operator=(GOManager&&) = delete;

private:
	std::vector<std::forward_list<GameObject>> a;

};
