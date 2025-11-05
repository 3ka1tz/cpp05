#include "Bureaucrat.hpp"

int main() {
    std::cout << "Test 1: Grade 42" << std::endl;
    try {
        Bureaucrat alice("Alice", 42);
        std::cout << alice << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Test 2: Grade 0" << std::endl;
    try {
        Bureaucrat bob("Bob", 0);
        std::cout << bob << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;

    std::cout << "Test 3: Grade 151" << std::endl;
    try {
        Bureaucrat charlie("Charlie", 151);
        std::cout << charlie << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Test 4: Increment Grade 1" << std::endl;
    try {
        Bureaucrat diana("Diana", 1);
        std::cout << diana << std::endl;
        diana.incrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Test 5: Decrement Grade 150" << std::endl;
    try {
        Bureaucrat ed("Ed", 150);
        std::cout << ed << std::endl;
        ed.decrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
