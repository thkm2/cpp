#include "Form.hpp"

Form::Form() : _name("undefined"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
	_isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw 1000; // mettre exception !!
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw 1000; // mettre exception !!
}

Form::Form(const Form &other) : _name(other._name),
	_isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw 1000; // mettre exception !!
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw 1000; // mettre exception !!
}

Form &Form::operator=(const Form &other) {
	if (this != &other) {
		_isSigned = other._isSigned;
		// _name = other._name; // etc pas possible car const
	}
	return (*this);
}