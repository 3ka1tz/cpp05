#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "Test 1: Successful Form Signing" << std::endl;
    try {
        Bureaucrat alice("Alice", 42);
        Form form("Form", 1, 150);
        std::cout << alice << std::endl;
        std::cout << form << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
