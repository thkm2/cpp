#include <iostream>

// mettre en uppercase
// espace entre chaque arg

int main(int ac, char **av) {
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		int i = 1;
		while (i < ac) {
			std::cout << av[i++];
		}
		std::cout << std::endl;
	}
	return (0);
}