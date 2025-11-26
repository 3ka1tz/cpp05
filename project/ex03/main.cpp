#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try
    {
        Bureaucrat alice("Alice", 5);
        std::cout << alice;

        PresidentialPardonForm PPForm;
        std::cout << PPForm;

        alice.signForm(PPForm);
        std::cout << PPForm;

        alice.executeForm(PPForm);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n";

    try
    {
        Bureaucrat bob("Bob", 45);
        std::cout << bob;

        RobotomyRequestForm RRForm;
        std::cout << RRForm;

        bob.signForm(RRForm);
        std::cout << RRForm;

        bob.executeForm(RRForm);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n";

    try
    {
        Bureaucrat charlie("Charlie", 137);
        std::cout << charlie;

        ShrubberyCreationForm SCForm;
        std::cout << SCForm;

        charlie.signForm(SCForm);
        std::cout << SCForm;

        charlie.executeForm(SCForm);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
}
