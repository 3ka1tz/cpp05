#include "Form.hpp"

#include <iostream>

#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {
    std::cout << "Form " << _name << " constructed." << std::endl;
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
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

void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > _gradeToSign) {
        throw GradeTooLowException();
    }
    _isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too highaaaaaaaaaaaaaaa!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "his/her grade was too low.";
}

std::ostream& operator<<(std::ostream& os, const Form& f) {
    os << "Form " << f.getName() << " signed = " << std::boolalpha << f.getIsSigned() << ", sign grade = " << f.getGradeToSign() << ", exec grade = " << f.getGradeToExecute() << ".";
    return os;
}
