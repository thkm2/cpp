#include "Array.hpp"

#include <iostream>

int main() {
	Array<int> a(3);
	std::cout << "a size : " << a.size() << std::endl;
	return 0;
}