#include "Bureaucrat.hpp"

#include <iostream>

int main() {
    std::cout << "\033[32mTest 1: Default Constructor\033[0m\n";
    try {
        Bureaucrat b;
        std::cout << b;
    } catch (const std::exception& e) {
        std::cout << e.what();
    }

/*
    std::cout << "\033[32mTest 0: Default constructor\033[0m" << std::endl;
    try {
        Bureaucrat x;
        std::cout << x << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[32mTest 1: Increment Grade 42\033[0m" << std::endl;
    try {
        Bureaucrat alice("Alice", 42);
        std::cout << alice << std::endl;
        alice.incrementGrade();
        std::cout << alice << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[32mTest 2: Decrement Grade 42\033[0m" << std::endl;
    try {
        Bureaucrat bob("Bob", 42);
        std::cout << bob << std::endl;
        bob.decrementGrade();
        std::cout << bob << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 3: Grade 0\033[0m" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 0);
        std::cout << charlie << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 4: Grade 151\033[0m" << std::endl;
    try {
        Bureaucrat dave("Dave", 151);
        std::cout << dave << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 5: Increment Grade 1\033[0m" << std::endl;
    try {
        Bureaucrat eve("Eve", 1);
        std::cout << eve << std::endl;
        try {
            eve.incrementGrade();
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            std::cout << eve << std::endl;
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 6: Decrement Grade 150\033[0m" << std::endl;
    try {
        Bureaucrat frank("Frank", 150);
        std::cout << frank << std::endl;
        try {
            frank.decrementGrade();
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            std::cout << frank << std::endl;
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
*/
    return 0;
}
