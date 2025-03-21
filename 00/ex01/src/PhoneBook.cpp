#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : _nb_contact(0) {}

void PhoneBook::print_instructions() const {
	std::cout << "Entrez votre choix (ADD, SEARCH et EXIT) :" << std::endl;
}

void PhoneBook::print() const {
	for (int i = 0; i < 8; i++) {
		_contacts[i].print();
	}
}

void PhoneBook::add_choice() {
	_contacts[_nb_contact].set_infos();
	_nb_contact++;
	std::cout << GREEN << "Contact ajouté !" << RESET << std::endl;
}