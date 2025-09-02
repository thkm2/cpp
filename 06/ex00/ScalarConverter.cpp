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

static void printChar(double value) {
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (value < 32 || value > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

static void printInt(double value) {
    if (std::isnan(value) || std::isinf(value) || value < static_cast<double>(INT_MIN)
        	|| value > static_cast<double>(INT_MAX)) {
        std::cout << "int: impossible" << std::endl;
    }
	else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static bool isInteger(double value) {
    return std::floor(value) == value && !std::isnan(value) && !std::isinf(value);
}

static void printFloat(double value) {
    if (std::isnan(value)) {
        std::cout << "float: nanf" << std::endl;
    } else if (std::isinf(value)) {
        if (value > 0)
            std::cout << "float: +inff" << std::endl;
        else
            std::cout << "float: -inff" << std::endl;
    } else {
        float f = static_cast<float>(value);
        if (isInteger(f))
            std::cout << std::fixed << std::setprecision(1)
                      << "float: " << f << "f" << std::endl;
        else
            std::cout << std::setprecision(6)
                      << "float: " << f << "f" << std::endl;
    }
}

static void printDouble(double value) {
    if (std::isnan(value)) {
        std::cout << "double: nan" << std::endl;
    } else if (std::isinf(value)) {
        if (value > 0)
            std::cout << "double: +inf" << std::endl;
        else
            std::cout << "double: -inf" << std::endl;
    } else {
        if (isInteger(value)) {
            std::cout << std::fixed << std::setprecision(1)
                      << "double: " << value << std::endl;
        } else {
            std::cout << std::setprecision(6)
                      << "double: " << value << std::endl;
        }
    }
}

void ScalarConverter::convert(const std::string &s) {
	double value = static_cast<double>(s);
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}