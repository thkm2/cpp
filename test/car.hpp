#ifndef C_HPP
#define C_HPP

#include <iostream>

class Voiture {
	private:
		std::string brand;
		std::string model;
		int			hp;
		int			num;
	public:
		Voiture();
		Voiture(std::string nbrand, std::string nmodel, int nhp);
		Voiture(Voiture &other);
		Voiture &operator=(const Voiture &other);
		void print_details() const;
		bool is_exist() const;
		void set_number(int n);
};

#endif