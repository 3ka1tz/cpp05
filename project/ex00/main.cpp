#include "Bureaucrat.hpp"

int main() {
    std::cout << "\033[32mTest 0: Grade 42\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 42);
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[32mTest 1: Increment Grade 42\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 42);
        std::cout << amaia << std::endl;
        amaia.incrementGrade();
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[32mTest 2: Decrement Grade 42\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 42);
        std::cout << amaia << std::endl;
        amaia.decrementGrade();
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 3: Grade 0\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 0);
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 4: Grade 151\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 151);
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 5: Increment Grade 1\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 1);
        std::cout << amaia << std::endl;
        amaia.incrementGrade();
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 6: Decrement Grade 150\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 150);
        std::cout << amaia << std::endl;
        amaia.decrementGrade();
        std::cout << amaia << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
