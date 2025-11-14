#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "\033[32mTest 0: Successful Form Signing\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 1);
        Form form("Test", 50, 150);
        std::cout << amaia << std::endl;
        std::cout << form << std::endl;
        amaia.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\033[31mTest 1: Unsuccessful Form Signing\033[0m" << std::endl;
    try {
        Bureaucrat amaia("Amaia", 100);
        Form form("Test", 50, 150);
        std::cout << amaia << std::endl;
        std::cout << form << std::endl;
        amaia.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
