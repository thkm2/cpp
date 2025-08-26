#include "ScalarConverter.hpp"

// INUTILE --------------
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	(void)other;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	(void)other;
	return *this;
}
ScalarConverter::~ScalarConverter() {}
// ---------------------- (mais là au cas où)

static void fromChar(char c) {
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
		<<  static_cast<float>(c) << "f" << std::endl; // std::fixed sert à formater l'affichage des nb à virgule
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}
void fromFloat(float f) {
	std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convert(const std::string &s) {
	fromChar(s[0]);
}