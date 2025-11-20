#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <ostream>
#include <string>

class Bureaucrat;

class Form {
public:
    Form();
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    class GradeToSignTooHighException : public std::exception {
        const char* what() const throw();
    };

    class GradeToSignTooLowException : public std::exception {
        const char* what() const throw();
    };

    class GradeToExecuteTooHighException : public std::exception {
        const char* what() const throw();
    };

    class GradeToExecuteTooLowException : public std::exception {
        const char* what() const throw();
    };

    void beSigned(const Bureaucrat& bureaucrat);

private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
