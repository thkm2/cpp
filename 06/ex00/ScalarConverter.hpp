#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip> // std::fixed() + setprecision
#include <cmath> // std::isnan, std::isinf
#include <climits> // INT_MIN, INT_MAX

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter(); // pas besoin -> pas instanciable -> private -> mais OCF
	public:
		static void convert(const std::string &s);
};


#endif