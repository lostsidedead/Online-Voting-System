# Online Voting System in C++

This is a simple Online Voting System implemented in C++. The system allows users to cast votes for three different options, view the results, and manage their votes through a menu-driven interface. The project demonstrates basic concepts of object-oriented programming (OOP) such as classes, methods, and data encapsulation.

## Features

- **Cast Vote**: Users can select one of three options to cast their vote.
- **View Results**: Users can view the current vote tally for each option.
- **Exit**: The program allows users to exit the voting system.


## Requirements

- C++ Compiler (e.g., GCC, Clang)


## Files

- **main.cpp**: The main program that runs the voting system.
- **voting_system.h**: Header file containing the class declaration for the voting system.
- **voting_system.cpp**: Implementation file for the methods of the voting system.


## Compilation and Running

To compile and run the program, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/lostsidedead/online-voting-system.git
cd online-voting-system
```


2. Compile the program:

```bash
g++ main.cpp voting_system.cpp -o voting_system
```

3. Run the program:

```bash
./voting_system
```

Example Output

```bash
Online Voting System
1. Cast Vote
2. View Results
3. Exit
Enter your choice: 1
Select your vote (1-Option1, 2-Option2, 3-Option3): 2
You voted for Option 2.


Online Voting System
1. Cast Vote
2. View Results
3. Exit
Enter your choice: 2
Voting Results:
Option 1: 0 votes
Option 2: 1 votes
Option 3: 0 votes
```

License

This project is licensed under the MIT License.
