# CPP Module 05

## [Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!](https://github.com/3ka1tz/cpp05/tree/main/project/ex00)
Let’s design an artificial nightmare of offices, corridors, forms, and waiting queues. Sounds fun? No? Too bad.

First, start with the smallest cog in this vast bureaucratic machine: the Bureaucrat.

A Bureaucrat must have:
- A constant name.
- A grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade).

Any attempt to instantiate a Bureaucrat with an invalid grade must throw an exception: either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

You will provide getters for both attributes: getName() and getGrade(). You must also implement two member functions to increment or decrement the bureaucrat’s grade. If the grade goes out of range, both functions must throw the same exceptions as the constructor.

The thrown exceptions must be catchable using try and catch blocks.

You must implement an overload of the insertion («) operator to print output in the following format (without the angle brackets):
<name>, bureaucrat grade <grade>.
As usual, submit some tests to prove that everything works as expected.
