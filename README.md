# SCIENTIFIC CALCULATOR

# Description
1. This project is a terminal-based Scientific Calculator written in C.
2. Features include:
3. Basic arithmetic operations
4. Advanced mathematical functions
5. Input validation
6. Continuous menu-driven interaction
7. Displays:
8. Calculation result
9. Error messages (invalid input, division by zero, invalid log values)

# Repository Structure
```
scientific-calculator/
│
├── src/
│   └── main.c
│
├── include/
│   └── calculator.h
│
├── docs/
│   ├── Algorithm.txt
│   ├── Flowchart.txt
│   └── ProjectReport.pdf
│
├── assets/
│   ├── Flowchart.png
│   ├── Output_1.png
│   ├── Output_2.png
│   ├── Output_3.png
│   ├── Output_4.png
│   └── Output_5.png
│
├── sample_inputs/
│   ├── input1.txt
│   ├── input2.txt
│   ├── input3.txt
│   ├── input4.txt
│   └── input5.txt
│
│
└── README.md
```
# Getting Started

1. Requirements
2. GCC Compiler (recommended)
3. Code Editor (VS Code, Notepad++, Sublime, etc.)

# Build Instructions

1. Clone / Download the repository:
2. git clone https://github.com/your-username/scientific-calculator.git
3. Navigate into the project folder:
4. cd scientific-calculator/src
5. Compile the program using GCC:
6. gcc main.c -o calculator -lm
7. Run the executable:
8. ./calculator

# Usage

1. Run the calculator using the terminal
2. You will see a menu containing options like:
3. Addition
4. Subtraction
5. Multiplication
6. Division
7. Power
8. Square root
9. sin, cos, tan
10. Natural log
11. Log base 10
12. Enter your choice (1–11)
13. Enter the required input numbers
14. The program will:
15. Display the result
16. Show an error if:
17. Division by zero
18. Square root of negative number
19. Log of non-positive number
20. Enter 0 to exit the program.
