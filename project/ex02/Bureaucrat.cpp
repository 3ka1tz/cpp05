#include "Bureaucrat.hpp"

#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    }
    
    if (grade > 150) {
        throw GradeTooLowException();
    }

    _grade = grade;
};

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    std::cout << "Attempting to promote Bureaucrat " << _name << "'s grade." << std::endl;

    if (_grade <= 1) {
        throw GradeTooHighException();
    }

    _grade--;
}

void Bureaucrat::decrementGrade() {
    std::cout << "Attempting to demote Bureaucrat " << _name << "'s grade." << std::endl;

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

void Bureaucrat::signForm(Form& Form) {
    try {
        Form.beSigned(*this);
        std::cout << _name << " signed " << Form.getName() << " Form." << std::endl;
    } catch (std::exception& e) {
        std::cout << _name << " couldn't sign " << Form.getName() << " Form because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << "Bureaucrat " << b.getName() << "'s grade is " << b.getGrade() << ".";
    return os;
}
