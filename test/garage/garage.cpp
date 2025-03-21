#include <iostream>
#include "car.hpp"
#include "garage.hpp"

Garage::Garage() : n_cars(0) {}

Garage::Garage(Voiture *new_cars, bool new_ncars) : n_cars(new_ncars) {
	for (int i = 0; i < 8; i++) {
		cars[i] = new_cars[i];
	}
}

Garage::Garage(const Garage &other) {
	*this = other;
}

Garage &Garage::operator=(const Garage &other) {
	if (this != &other) {
		for (int i = 0; i < 8; i++) {
			cars[i] = other.cars[i];
		}
	}
	n_cars = other.n_cars;
	return (*this);
}

void Garage::print_garage() const {
	if (n_cars == 0) {
		std::cout << "Le garage est vide" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++) {
		if (cars[i].is_exist())
			cars[i].print_details();
		else
			std::cout << "Emplacement vide" << std::endl;
	}
}

void Garage::add_car(Voiture &new_car) {
	if (n_cars == 8) {
		std::cout << "Désolé mais le garage est plein" << std::endl;
		return ;
	}
	if (!new_car.is_exist()) {
		std::cout << "Cette voiture n'existe pas" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++) {
		if ((cars + i) == &new_car) {
			std::cout << "Cette voiture est déjà dans votre garage..." << std::endl;
			break ;
		}
	}
	n_cars++;
	for (int i = 0; i < 8; i++) {
		if (!cars[i].is_exist()) {
			new_car.set_number(i + 1);
			cars[i] = new_car;
			break ;
		}
	}
}

void Garage::del_car(int num) {
	if (num < 1 || num > 8) {
		std::cout << "Numéro invalide" << std::endl;
		return ;
	}
	if (!cars[num - 1].is_exist()) {
		std::cout << "L'emplacement il est vide, tu veux supprimer quoi" << std::endl;
		return ;
	}
	Voiture tmp;
	cars[num - 1] = tmp;
	n_cars--;
}