#include "Bureaucrat.hpp"

#include <iostream>

#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default Bureaucrat"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw GradeTooHighException();
    if (grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade() {
    if (grade <= 1) {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade >= 150) {
        throw GradeTooLowException();
    }
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return "\033[31mBureaucrat grade too high!\033[0m\n"; }

const char* Bureaucrat::GradeTooLowException::what() const throw() { return "\033[31mBureaucrat grade too low!\033[0m\n"; }

void Bureaucrat::signForm(AForm& form) const {
    try
    {
        form.beSigned(*this);
        std::cout << "\033[32m" << name << " signed " << form.getName() << ".\033[0m\n";
    }
    catch (const std::exception& e)
    {
        std::cout << "\033[31m" << name << " couldn't sign " << form.getName() << " because \033[0m" << e.what();
    }
}

void Bureaucrat::executeForm(const AForm& form) const {
    try
    {
        form.execute(*this);
        std::cout << "\033[32m" << name << " executed " << form.getName() << ".\033[0m\n";
    }
    catch (const std::exception& e)
    {
        std::cout << "\033[31m" << name << " couldn't execute " << form.getName() << " because \033[0m" << e.what();
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".\n";
    return os;
}
