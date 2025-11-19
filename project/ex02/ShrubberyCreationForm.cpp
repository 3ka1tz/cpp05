#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default") {
    std::cout << _name << " with " << _target << " target has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << _name << " with " << _target << " target has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other), _target(other._target) {
    std::cout << _name << " with " << _target << " target has been copy constructed." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        _isSigned = other._isSigned;
        _target = other._target;
    }
    std::cout << _name << " with " << _target << " target has been assigned." << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << _name << " with " << _target << " target has been destructed." << std::endl;
}

void ShrubberyCreationForm::executeAction(const std::string& target) const {
    std::string filename = target + "_shrubbery";

    std::ofstream ofs(filename);
    if (!ofs) {
        std::cerr << "Error: Could not create file " << filename << "." << std::endl;
        return;
    }

    ofs << "       ASCII trees       "
        << "                         "
        << "    /\\           /\\    "
        << "   /  \\         /  \\   "
        << "  /    \\       /    \\  "
        << " /      \\     /      \\ "
        << "/________\\   /________\\"
        << "    ||            ||     "
        << "    ||            ||     "
        << "    ||            ||     ";

    ofs.close();

    std::cout << "File " << filename << "has been created successfully." << std::endl;
}
