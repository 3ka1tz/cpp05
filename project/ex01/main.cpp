#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    /* <--- Test 1 ---> */
    std::cout << "\033[32mTest 1: Successful signing\033[0m" << std::endl;

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

    /* <--- Test 2 ---> */
    std::cout << "\033[31mTest 2: Bureaucrat's grade is insufficient\033[0m" << std::endl;

    try {
        Bureaucrat bob("Bob", 100);
        std::cout << bob << std::endl;

        Form form("FormB", 50, 150);
        std::cout << form << std::endl;

        bob.signForm(form);
        std::cout << form << std::endl;

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    /* <--- Test 3 ---> */
    std::cout << "\033[31mTest 3: Form's gradeToSign is too high\033[0m" << std::endl;

    try {
        Bureaucrat charlie("Charlie", 1);
        std::cout << charlie << std::endl;

        Form form("FormC", 0, 150);
        std::cout << form << std::endl;

        charlie.signForm(form);
        std::cout << form << std::endl;

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    /* <--- Test 4 ---> */
    std::cout << "\033[31mTest 4: Form's gradeToSign is too low\033[0m" << std::endl;

    try {
        Bureaucrat dave("Dave", 1);
        std::cout << dave << std::endl;

        Form form("FormD", 151, 150);
        std::cout << form << std::endl;

        dave.signForm(form);
        std::cout << form << std::endl;

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    /* <--- Test 5 ---> */
    std::cout << "\033[31mTest 5: Form's gradeToExecute is too high\033[0m" << std::endl;

    try {
        Bureaucrat eve("Eve", 1);
        std::cout << eve << std::endl;

        Form form("FormE", 150, 0);
        std::cout << form << std::endl;

        eve.signForm(form);
        std::cout << form << std::endl;

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    /* <--- Test 6 ---> */
    std::cout << "\033[31mTest 6: Form's gradeToSign is too low\033[0m" << std::endl;

    try {
        Bureaucrat frank("Frank", 1);
        std::cout << frank << std::endl;

        Form form("FormF", 150, 151);
        std::cout << form << std::endl;

        frank.signForm(form);
        std::cout << form << std::endl;

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
