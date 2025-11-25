#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try
    {
        Bureaucrat alice("Alice", 51);
        std::cout << alice;

        alice.incrementGrade();
        std::cout << alice;

        Form form("Project Approval Form", 50, 150);
        std::cout << form;

        alice.signForm(form);
        std::cout << form;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
}
