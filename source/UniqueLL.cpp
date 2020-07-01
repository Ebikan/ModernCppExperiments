#include "stdafx.h"
/******************************************************************************

	file:	UniqueLL.cpp

	brief:	none

	date:	6/29/2020 10:31:08 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/


#include <iostream>
#include "UniqueLL.h"


UniqueLL::Node::Node() : data(0), next(nullptr)
{
	std::cout << "ctor" << std::endl;
}

UniqueLL::Node::Node(int data) noexcept : data(data), next(nullptr)
{
	std::cout << "cctor" << std::endl;
}

UniqueLL::Node::Node(int data, std::unique_ptr<Node> next) noexcept : data(data)
{
	this->next = std::move(next);
	std::cout << "nctor" << std::endl;
}

UniqueLL::Node::~Node()
{
	std::cout << "dtor" << std::endl;
}


UniqueLL::UniqueLL()
{
	std::cout << "LLctor" << std::endl;
	headNode = nullptr;
}
UniqueLL::~UniqueLL()
{
	std::cout << "LLdtor" << std::endl;
}

void UniqueLL::AddFront(int data)
{
	headNode = std::make_unique<Node>(data, std::move(headNode));
}

void UniqueLL::RemoveFront()
{
	headNode = std::move(headNode->next);
}

void UniqueLL::AddAt(int pos, int data)
{
	if (pos == 0) {
		AddFront(data);
		return;
	}
	Node* curr = headNode.get();
	for (int i = 0; curr->next && i < (pos - 1); i++) {
		curr = curr->next.get();
	}
	curr->next = std::make_unique<Node>(data, std::move(curr->next));;
}

int UniqueLL::Get(int pos) const
{
	Node const* curr = headNode.get();
	for (int i = 0; curr->next && i < pos; i++) {
		curr = curr->next.get();
	}
	return curr->data;
}

void UniqueLL::print()
{
	Node const* curr = headNode.get();
	while (curr) {
		std::cout << curr->data << " ";
		curr = curr->next.get();
	}
	std::cout << std::endl;
}





