#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "./convert <literal>" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}

// c'est quoi nan, inf, +/-inf, etc
// comment fonctionne la fonction isInteger