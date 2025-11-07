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

&lt;name&gt;, bureaucrat grade &lt;grade&gt;.

As usual, submit some tests to prove that everything works as expected.

## [Exercise 01: Form up, maggots!](https://github.com/3ka1tz/cpp05/tree/main/project/ex01)
Now that you have bureaucrats, let’s give them something to do. What better activity could there be than filling out a stack of forms?

Let’s create a **Form** class. It has:
- A constant name.
- A boolean indicating whether it is signed (at construction, it is not).
- A constant grade required to sign it.
- A constant grade required to execute it.
All these attributes are **private**, not protected.

The grades of the **Form** follow the same rules as those of the Bureaucrat. Thus, the following exceptions will be thrown if a form’s grade is out of bounds: `Form::GradeTooHighException` and `Form::GradeTooLowException`.

As before, write getters for all attributes and overload the insertion («) operator to print all the form’s information.

Also, add a `beSigned()` member function to the Form that takes a Bureaucrat as a parameter. It changes the form’s status to signed if the bureaucrat’s grade is high enough (greater than or equal to the required one). Remember, grade 1 is higher than grade 2. If the grade is too low, throw a `Form::GradeTooLowException`.

Then, modify the `signForm()` member function in the Bureaucrat class. This function must call `Form::beSigned()` to attempt to sign the form. If the form is signed successfully, it will print something like:

&lt;bureaucrat&gt; signed &lt;form&gt;.

Otherwise, it will print something like:

&lt;bureaucrat&gt; couldn’t sign &lt;form&gt; because &lt;reason&gt;.

Implement and submit some tests to ensure everything works as expected.
