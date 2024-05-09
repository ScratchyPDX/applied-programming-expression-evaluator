# Overview
This program reads a math expression from a user input prompt, evaluates it, and prints the result. It is capable of intepreting equations that include addition, subtraction, multiplication, division, and exponents (using the ^ character). This is accomplished by using the Shunting Yard Algorithm to parse the expression into Reverse Polish Notation, which is then used to complete the calculation,

## This project definition of terms:
* Shunting Yard Algorithm is used to parse the text string in to a Reverse Polish Notation form. This is accomplshish by using a stck, queue and array for storing and ordering of the numeric values and operators.
* Reverse Polish Notation format ensure that a math expersion is evaluated in the correct order of operations by defining the priorty that should be used when evaluating operators
* Order of Operations is a set of rules that is to be followed in a particular sequence while solving an mathmatical expression

## Software Demo video
[Expression Evaluator](https://youtu.be/qD3KoLZ6_q4)

# Development Environment
The purpose of this project is to demonstrate some of the capabilities of C++. Visual Studio 2022 Community Edition (17.9) was used to code, test, and debug this project. The project was written in C++ 14 Standard, which is the default for Visual Studio 2022.

## The project use headers which perform the following functions:
[**\<iostream\>**](https://cplusplus.com/reference/iostream/) - Header that defines the standard input/output stream objects

[**\<string\>**](https://cplusplus.com/reference/string/) - This header introduces string types, character traits and a set of converting function

[**\<stack\>**](https://cplusplus.com/reference/stack/stack/) - Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), where elements are inserted and extracted only from one end of the container.

[**\<cmath\>**](https://cplusplus.com/reference/cmath/?kw=cmath) - Declares a set of functions to compute common mathematical operations and transformations

[**\<vector\>**](https://cplusplus.com/reference/vector/vector/)  Vectors are sequence containers representing arrays that can change in size

[**\<sstream\>**](https://cplusplus.com/reference/sstream/) Header providing string stream classes

[**\<conio\>**](https://stackoverflow.com/a/59812090) Deprecated library that contains routines that are specific to the DOS command line

# Useful Websites
These websites and articles were helpful while developing this project
* [cplusplus.com](https://cplusplus.com/reference/)
* [Shunting Yard Algorithm](https://brilliant.org/wiki/shunting-yard-algorithm/)
* [Reverse Polish Notation](https://www-stone.ch.cam.ac.uk/documentation/rrf/rpn.html)

# List of ToDos
* Add support for parentheses - to make this program fully functional, parentheses would need to be added to the evaluator. This added a bunch of addtional complexity, so I decided to omit it for this project.
* In a real-world project, unit tests would have been added
* Add a real frontend to the app and not just a console I/O
* Make this a dynamic link libary that could be used by another application to perform math