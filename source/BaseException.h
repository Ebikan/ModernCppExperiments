#pragma once
/******************************************************************************

	file:	BaseException.h

	brief:	none

	date:	7/1/2020 4:03:15 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include <exception>

class BaseException : public std::exception {

public:

	BaseException(std::string file, int line) noexcept;
	virtual char const* GetType() const noexcept;
	virtual char const* what() const noexcept;


private:
	std::string file;
	int line;
	mutable std::string strBuffer;

};