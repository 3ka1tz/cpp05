#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try
    {
        Bureaucrat alice("Alice", 51);
        std::cout << alice;

        Form form("Sample Form", 50, 150);
        std::cout << form;

        alice.signForm(form);
        std::cout << "\n";

        alice.incrementGrade();
        std::cout << alice;

        std::cout << form;

        alice.signForm(form);
        std::cout << "\n";

        std::cout << form;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
}
