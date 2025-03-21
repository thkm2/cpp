#ifndef G_HPP
#define G_HPP

#include <iostream>
#include "car.hpp"

class Garage {
	private:
		Voiture cars[8];
		int		n_cars;
	public:
		Garage();
		Garage(Voiture *new_cars, bool new_ncars);
		Garage(const Garage &other);
		Garage &operator=(const Garage &other);
		void print_garage() const;
		void add_car(Voiture &new_car);
		void del_car(int num);
};

#endif