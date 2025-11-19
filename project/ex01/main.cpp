#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "\033[32mTest 0: Successful Signing\033[0m" << std::endl;
    try {
        Bureaucrat alice("Alice", 1);
        std::cout << alice << std::endl;
        Form form("FormA", 50, 150);
        std::cout << form << std::endl;
        alice.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 1: Unsuccessful Signing\033[0m" << std::endl;
    try {
        Bureaucrat bob("Bob", 100);
        std::cout << bob << std::endl;
        Form form("FormB", 0, 150);
        std::cout << form << std::endl;
        bob.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
