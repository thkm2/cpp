#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << GREEN << "DEBUG" << RESET << " - "
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info( void ) {
	std::cout << BLUE << "INFO" << RESET << " - "
	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void Harl::warning( void ) {
	std::cout << YELLOW << "WARNING" << RESET << " - "
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
	<< std::endl;
}

void Harl::error( void ) {
	std::cout << RED << "ERROR" << RESET << " - "
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain( std::string level ) {
	void		(Harl::*ptrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*ptrs[i])();
	}
}
