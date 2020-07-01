#pragma once
/******************************************************************************

	file:	UniqueLL.h

	brief:	none

	date:	6/29/2020 10:31:08 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/


#include <memory>

class UniqueLL {

public:
	class Node {
	public:
		Node();
		~Node();
		Node(int data) noexcept;
		Node(int data, std::unique_ptr<Node> next) noexcept;
		std::unique_ptr<Node> next;
		int data;
	};

public:

	UniqueLL();
	~UniqueLL();

	void AddFront(int data);
	void RemoveFront();

	void AddAt(int pos, int data);
	int Get(int pos) const;
	
	void print();


private:
	std::unique_ptr<Node> headNode;
};