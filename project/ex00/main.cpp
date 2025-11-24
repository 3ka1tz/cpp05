#include "Bureaucrat.hpp"

#include <iostream>

int main() {
    std::cout << "\n\033[34mTest 1: Default Constructor\033[0m\n";
    try {
        Bureaucrat x;
        std::cout << x << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[34mTest 2: Parameterized Constructor\033[0m\n";
    try {
        Bureaucrat a("Alice", 42);
        std::cout << a << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[34mTest 3: Grade Increment\033[0m\n";
    try {
        Bureaucrat b("Bob", 2);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[34mTest 4: Grade Decrement\033[0m\n";
    try {
        Bureaucrat c("Charlie", 149);
        std::cout << c << std::endl;
        c.decrementGrade();
        std::cout << c << std::endl;
        c.decrementGrade();
        std::cout << c << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[34mTest 5: Invalid Grade (0)\033[0m\n";
    try {
        Bureaucrat d("Dave", 0);
        std::cout << d << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[34mTest 6: Invalid Grade (151)\033[0m\n";
    try {
        Bureaucrat e("Eve", 151);
        std::cout << e << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
