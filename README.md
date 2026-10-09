
# C++ Calculator

A command-line calculator built using C++. This project provides basic arithmetic operations, input validation, and error handling through a simple menu-driven interface.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Modulus for integers
- Power calculation
- Square root calculation
- Input validation for menu choices and numbers
- Protection against division by zero and modulus by zero
- Negative square-root validation
- Option to perform multiple calculations
- Menu-driven interface

## Technologies Used

- C++
- Standard C++ Library
- `<iostream>` for input and output
- `<cmath>` for mathematical operations
- `<sstream>` and `<string>` for input validation

## Requirements

- A C++ compiler, such as GCC
- A terminal or command prompt

## How to Compile

Open a terminal in the project folder and run:

```bash
g++ calculator.cpp -o calculator
```

## How to Run

### Windows PowerShell

```powershell
.\calculator.exe
```

### Linux

```bash
./calculator
```

## Example Output

```text
==============================
       C++ CALCULATOR
==============================
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Square Root
8. Exit
==============================
Enter your choice: 1
Enter first number: 25
Enter second number: 15
Result: 40
```

## Learning Objectives

This project demonstrates the use of:

- Functions
- `switch` statements
- `do-while` loops
- Input validation
- Conditional statements
- Mathematical functions
- Error handling
- Modular program design

## Future Improvements

- Support for more mathematical operations
- Improved formatting of calculation results
- Automated unit tests
- Calculation history

## Author

Dhruv Bhatkar

## License

This project is licensed under the MIT License.