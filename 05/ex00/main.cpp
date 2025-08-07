#include "Bureaucrat.hpp"

// pour des getters, retourner une copie sur les types primitif (int, char, etc) et une ref constante sur les gros types
// 		const std::string &getName() const; // return un ref constante -> pas de copie sur un type lourd (std::string) + pas de possibilité d'edit
//		int			getGrade() const; // overkill de return un ref constante car la copie à quasi le meme poids
//
// si une méthode est virtual, toutes les méthodes enfant le sont aussi. Donc pas besoin de le spécifier, mais c'est plus clair

int main() {
	try {
		Bureaucrat p("Pedro", 1);
		std::cout << p << std::endl;
		p.incrementGrade();
		std::cout << p << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}

// Faire un main qui test plus en détail !!!!!!