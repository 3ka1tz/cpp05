#include "Form.hpp"

#include <iostream>

#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
    std::cout << "Form " << _name << " constructed." << std::endl;
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (_gradeToSign < 1) {
        throw GradeToSignTooHighException();
    }

    if (_gradeToSign > 150) {
        throw GradeToSignTooLowException();
    }

    if (_gradeToExecute < 1) {
        throw GradeToExecuteTooHighException();
    }

    if (_gradeToExecute > 150) {
        throw GradeToExecuteTooHighException();
    }

    std::cout << "Form " << _name << " constructed." << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
    std::cout << "Form " << _name << " copy constructed." << std::endl;
}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        _isSigned = other._isSigned;
    }
    std::cout << "Form " << _name << " assigned." << std::endl;
    return *this;
}

Form::~Form() {
    std::cout << "Form " << _name << " destructed." << std::endl;
}

const std::string& Form::getName() const {
    return _name;
}

bool Form::getIsSigned() const {
    return _isSigned;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign) {
        throw GradeToSignTooLowException();
    }

    _isSigned = true;
}

const char* Form::GradeToSignTooHighException::what() const throw() {
    return "\033[31mForm construction failed, gradeToSign too high (it must be between 1 and 150).\033[0m";
}

const char* Form::GradeToSignTooLowException::what() const throw() {
    return "\033[31mForm construction failed, gradeToSign too low (it must be between 1 and 150).\033[0m";
}

const char* Form::GradeToExecuteTooHighException::what() const throw() {
    return "\033[31mForm construction failed, gradeToExecute too high (it must be between 1 and 150).\033[0m";
}

const char* Form::GradeToExecuteTooLowException::what() const throw() {
    return "\033[31mForm construction failed, gradeToExecute too low (it must be between 1 and 150).\033[0m";
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form " << f.getName() << ": isSigned = " << std::boolalpha << f.getIsSigned() << ", gradeToSign = " << f.getGradeToSign() << ", gradeToExecute = " << f.getGradeToExecute() << ".";
    return os;
}
