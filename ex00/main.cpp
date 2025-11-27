#include "Bureaucrat.hpp"

#include <iostream>

int main()
{
    try
    {
        Bureaucrat alice("Alice", 42);
        std::cout << alice;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n";

    try
    {
        Bureaucrat bob("Bob", 2);
        std::cout << bob;
        bob.incrementGrade();
        std::cout << bob;
        bob.incrementGrade();
        std::cout << bob;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n";

    try
    {
        Bureaucrat charlie("Charlie", 149);
        std::cout << charlie;
        charlie.decrementGrade();
        std::cout << charlie;
        charlie.decrementGrade();
        std::cout << charlie;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
}
