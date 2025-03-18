#include "garage.hpp"

Voiture::Voiture() : brand("inconnue"), model("inconnu"), hp(0), num(0) {}

Voiture::Voiture(std::string nbrand, std::string nmodel, int nhp, int nnum) {
	brand = nbrand;
	model = nmodel;
	hp = nhp;
	num = nnum;
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
	std::cout << "- " << model << " de la marque " << brand << " et elle a " << hp << " chevaux, num : " << num << std::endl;
}
