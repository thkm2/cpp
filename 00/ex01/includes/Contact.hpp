#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		~Contact();
};

Contact::Contact() : _first_name("inconnu"), _last_name("inconnu"), _nickname("inconnu"), _phone_number("inconnu"), _darkest_secret("inconnu") {}

Contact::Contact(
	std::string first_name, 
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string darkest_secret)
	: _first_name(first_name),
	_last_name(last_name),
	_nickname(nickname),
	_phone_number(phone_number),
	_darkest_secret(darkest_secret) {}

Contact::~Contact() {
	std::cout << "Contact " << _first_name << _last_name << " supprimé" << std::endl;
}

#endif