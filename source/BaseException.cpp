#include "stdafx.h"
/******************************************************************************

	file:	BaseException.cpp

	brief:	none

	date:	7/1/2020 4:03:15 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include <sstream>
#include "BaseException.h"

char const* BaseException::GetType() const noexcept
{
	return "BaseException";
}

char const* BaseException::what() const noexcept
{
	using namespace std;
	std::stringstream buffer;
	buffer << GetType() << endl;
	strBuffer = buffer.str();
	return strBuffer.c_str();
}
