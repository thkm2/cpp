#include "garage.hpp"

Voiture::Voiture() : brand("inconnue"), model("inconnu"), hp(0), num(-1) {}

Voiture::Voiture(std::string nbrand, std::string nmodel, int nhp) : num(0) {
	brand = nbrand;
	model = nmodel;
	hp = nhp;
}

Voiture::Voiture(Voiture &other) {
	*this = other;
}

Voiture &Voiture::operator=(const Voiture &other) {
	if (this != &other) {
		brand = other.brand;
		model = other.model;
		hp = other.hp;
		num = other.num;
	}
	return *this;
}

void Voiture::print_details() const {
	std::cout << num << ") - " << brand << " " << model << " de " << hp << " chevaux" << std::endl;
}

bool Voiture::is_exist() const {
	return (num >= 0);
}

void Voiture::set_number(int n) {
	num = n;
}