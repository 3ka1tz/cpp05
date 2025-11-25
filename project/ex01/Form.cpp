#include "Form.hpp"

#include <iostream>

#include "Bureaucrat.hpp"

Form::Form() : name(""), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form& Form::operator=(const Form& other) {
    if (this != &other) isSigned = other.isSigned;
    return *this;
}

Form::~Form() {}

const std::string& Form::getName() const { return name; }

bool Form::getIsSigned() const { return isSigned; }

int Form::getGradeToSign() const { return gradeToSign; }

int Form::getGradeToExecute() const { return gradeToExecute; }

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeToSign) throw Bureaucrat::GradeTooLowException();
    isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() { return "\033[31mForm grade too high!\033[0m\n"; }

const char* Form::GradeTooLowException::what() const throw() { return "\033[31mForm grade too low!\033[0m\n"; }

std::ostream& operator<<(std::ostream& os, const Form& f) {
    os << f.getName() << ": isSigned = " << (f.getIsSigned() ? "true" : "false") << ", gradeToSign = " << f.getGradeToSign() << ", gradeToExecute = " << f.getGradeToExecute() << ".\n";
    return os;
}
