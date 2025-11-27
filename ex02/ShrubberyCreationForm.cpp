#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrubbery Creation Form", 145, 137), target("default_target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeAction() const {
    std::string filename = target + "_shrubbery";

    std::ofstream ofs(filename.c_str());
    if (!ofs) {
        std::cerr << "Error: Could not create file " << filename << ".\n";
        return;
    }

    ofs << "       ASCII trees      \n"
        << "                        \n"
        << "    /\\           /\\   \n"
        << "   /  \\         /  \\  \n"
        << "  /    \\       /    \\ \n"
        << " /      \\     /      \\\n"
        << "/________\\   /________\\\n"
        << "    ||           ||     \n"
        << "    ||           ||     \n"
        << "    ||           ||     \n";

    ofs.close();

    std::cout << "File " << filename << "has been created successfully.\n";
}
