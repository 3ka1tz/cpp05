#include "Bureaucrat.hpp"

#include <iostream>

#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
    std::cout << "Bureaucrat " << _name << " constructed." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    }

    if (grade > 150) {
        throw GradeTooLowException();
    }

    _grade = grade;

    std::cout << "Bureaucrat " << _name << " constructed." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    std::cout << "Bureaucrat " << _name << " copy constructed." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other._grade;
    }

    std::cout << "Bureaucrat " << _name << " assigned." << std::endl;

    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat " << _name << " destructed." << std::endl;
}

const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    std::cout << "Attempting to increment Bureaucrat " << _name << "'s grade." << std::endl;
    if (_grade <= 1) {
        throw GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::decrementGrade() {
    std::cout << "Attempting to decrement Bureaucrat " << _name << "'s grade." << std::endl;
    if (_grade >= 150) {
        throw GradeTooLowException();
    }
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << "\033[32mBureaucrat " << _name << " signed Form " << form.getName() << ".\033[0m" << std::endl;
    } catch (std::exception& e) {
        std::cout << "\033[31mBureaucrat " << _name << " couldn't sign Form " << form.getName() << " because his/her grade is insufficient.\033[0m" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << "Bureaucrat " << b.getName() << " has grade " << b.getGrade() << ".";
    return os;
}
