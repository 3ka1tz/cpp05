#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default") {
    std::cout << _name << " with " << _target << " target has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << _name << " with " << _target << " target has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other), _target(other._target) {
    std::cout << _name << " with " << _target << " target has been copy constructed." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        _isSigned = other._isSigned;
        _target = other._target;
    }
    std::cout << _name << " with " << _target << " target has been assigned." << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << _name << " with " << _target << " target has been destructed." << std::endl;
}

void RobotomyRequestForm::executeAction(const std::string& target) const {
    std::cout << "Beeep Be Be Beeeee Beeeeeeeep... drilling noises..." << std::endl;

    if (rand() % 2 == 0) {
        std::cout << _target << " target has been robotomized successfully." << std::endl;
    } else {
        std::cout << "Failed to robotomize " << _target << " target." << std::endl;
    }
}
