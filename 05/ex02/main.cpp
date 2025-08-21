#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int main() {
	RobotomyRequestForm f("home");
	Bureaucrat b("b", 1);
	b.signForm(f);
	f.execute(b);
	return 0;
}

