#include "../includes/Contact.hpp"

Contact::Contact() : _first_name("inconnu"), _last_name("inconnu"), _nickname("inconnu"), _phone_number("inconnu"), _darkest_secret("inconnu") {}

std::string get_info(std::string phrase) {
	std::string input = "";

	std::cout << phrase << std::endl;
	std::getline(std::cin, input);
	while (!input.length()) {
		std::cout << RED << "Une information vide n'est pas autorisée" << RESET << std::endl;
		std::cout << phrase << std::endl;
		std::getline(std::cin, input);
	}
	return input;
}

void Contact::set_infos() {
	
	_first_name = get_info("Entrez le prénom du contact :");
	_last_name = get_info("Entrez le nom du contact :");
	_nickname = get_info("Entrez le surnom du contact :");
	_phone_number = get_info("Entrez le numéro de téléphone du contact :");
	_darkest_secret = get_info("Entrez le secret du contact :");
}

void Contact::print() const {
	std::cout << "- " << _first_name << " " << _last_name << " alias " << _nickname << ", num: " << _phone_number << ", secret: " << _darkest_secret << std::endl;
}

Contact::~Contact() {
	std::cout << RED << "Contact " << _first_name << _last_name << " supprimé" << RESET << std::endl;
}