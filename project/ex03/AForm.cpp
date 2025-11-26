#include "AForm.hpp"

#include <iostream>

#include "Bureaucrat.hpp"

AForm::AForm() : name(""), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150) throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other) isSigned = other.isSigned;
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const { return name; }

bool AForm::getIsSigned() const { return isSigned; }

int AForm::getGradeToSign() const { return gradeToSign; }

int AForm::getGradeToExecute() const { return gradeToExecute; }

const char* AForm::GradeTooHighException::what() const throw() { return "\033[31mForm grade too high!\033[0m\n"; }

const char* AForm::GradeTooLowException::what() const throw() { return "\033[31mForm grade too low!\033[0m\n"; }

const char* AForm::FormNotSignedException::what() const throw() { return "\033[31mForm is not signed!\033[0m\n"; }

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > gradeToSign) throw Bureaucrat::GradeTooLowException();
    isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const {
    if (!isSigned) {
        throw FormNotSignedException();
    }
    if (executor.getGrade() > gradeToExecute) {
        throw Bureaucrat::GradeTooLowException();
    }
    executeAction();
}

std::ostream& operator<<(std::ostream& os, const AForm& f) {
    os << f.getName() << ": isSigned = " << (f.getIsSigned() ? "true" : "false") << ", gradeToSign = " << f.getGradeToSign() << ", gradeToExecute = " << f.getGradeToExecute() << ".\n";
    return os;
}
