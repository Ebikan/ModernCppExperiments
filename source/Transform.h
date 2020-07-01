#pragma once
/******************************************************************************

	file:	Transform.h

	brief:	none

	date:	7/1/2020 11:13:16 AM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

//example mat. not actually matrix.
typedef float Matrix4x4;

class Transform {

public:

	Transform() noexcept;
	~Transform() noexcept;
	Transform(const Transform&) = delete;
	Transform& operator=(const Transform&) = delete;
	Transform(Transform&&) = delete;
	Transform& operator=(Transform&&) = delete;


private:
	Matrix4x4 global;
	Matrix4x4 local;
};
