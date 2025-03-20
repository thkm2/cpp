#include "garage.hpp"
#include "car.hpp"
#include <iostream>

void add_car_to(Garage *garage) {
	std::cin.ignore();
	std::string brand;
	std::cout << "Entre la marque : " << std::endl;
	std::getline(std::cin, brand);

	std::string model;
	std::cout << "Entre le modèle : " << std::endl;
	std::getline(std::cin, model);

	int hp;
	std::cout << "Entre le nombre de chevaux : " << std::endl;
	std::cin >> hp;
	Voiture v(brand, model, hp);
	(*garage).add_car(v);
}

void del_car_in(Garage *garage) {
	int num;
	std::cout << "Entre le numéro de la voiture à supprimer : " << std::endl;
	std::cin >> num;
	(*garage).del_car(num);
}

int main() {
	Garage garage;
	int choix;

	while (1) {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "   *****   Garage   *****   " << std::endl;
		std::cout << std::endl;
		std::cout << "1. Afficher garage" << std::endl;
		std::cout << "2. Ajouter Voiture" << std::endl;
		std::cout << "3. Supprimer Voiture" << std::endl;
		std::cout << "4. Quitter" << std::endl;
		std::cout << std::endl;
		std::cin >> choix;
		if (choix == 1) garage.print_garage();
		else if (choix == 2) add_car_to(&garage);
		else if (choix == 3) del_car_in(&garage);
		else if (choix == 4) exit(0);
		else std::cout << "Choix invalide... t'sais pas lire ou quoi zinc" << std::endl;
	}
	return (0);
}