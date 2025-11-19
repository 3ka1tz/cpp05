#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("default") {
    std::cout << _name << " with " << _target << " target has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << _name << " with " << _target << " target has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), _target(other._target) {
    std::cout << _name << " with " << _target << " target has been copy constructed." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        _isSigned = other._isSigned;
        _target = other._target;
    }
    std::cout << _name << " with " << _target << " target has been assigned." << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << _name << " with " << _target << " target has been destructed." << std::endl;
}

void PresidentialPardonForm::executeAction(const std::string& target) const {
    std::cout << _target << " target has been pardoned by Zaphod Beeblebrox." << std::endl;
}
