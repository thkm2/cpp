#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main() {
	ShrubberyCreationForm f("home");
	Bureaucrat b("b", 1);
	b.signForm(f);
	f.execute(b);
	return 0;
}

