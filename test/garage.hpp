#ifndef G_HPP
#define G_HPP

#include <iostream>

class Voiture {
	private:
		std::string brand;
		std::string model;
		int			hp;
		int			num;
	public:
		Voiture();
		Voiture(std::string nbrand, std::string nmodel, int nhp, int nnum);
		Voiture(Voiture &other);
		Voiture &Voiture::operator=(const Voiture &other);
		void print_details() const;
};

#endif