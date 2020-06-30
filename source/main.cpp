#include <iostream>
#include "UniqueLLTest.h"

int main(int args) {
	UniqueLL ll;
	ll.AddFront(1);
	ll.AddFront(2);
	ll.AddFront(3);
	ll.print();
	std::cout << "data at 1: " << ll.Get(1) << std::endl;
	ll.AddAt(1, 5);
	ll.print();
	ll.AddAt(2, 8);
	ll.print();
	ll.RemoveFront();
	ll.print();
	std::cout << "function end... deconstruction imminent." << std::endl;
	return 0;
}