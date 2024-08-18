# Push_Swap

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Algorithm Overview](#algorithm-overview)
- [Requirements](#requirements)
- [Project Details](#project-details)
- [Credits](#credits)

## Introduction
**Push_Swap** is a sorting algorithm project developed as part of the 42 School curriculum. The goal is to sort a stack of integers using a limited set of operations and to do so efficiently. This project demonstrates proficiency in algorithm design and optimization in C, specifically using the Radix Sort algorithm.

## Features
- Efficient sorting of a stack of integers using the Radix Sort algorithm.
- Implements a variety of stack operations:
  - **sa**: Swap the first two elements of stack A.
  - **sb**: Swap the first two elements of stack B.
  - **ss**: Swap the first two elements of both stacks A and B.
  - **pa**: Push the top element of stack B to stack A.
  - **pb**: Push the top element of stack A to stack B.
  - **ra**: Rotate stack A up by one position.
  - **rb**: Rotate stack B up by one position.
  - **rr**: Rotate both stacks A and B up by one position.
  - **rra**: Rotate stack A down by one position.
  - **rrb**: Rotate stack B down by one position.
  - **rrr**: Rotate both stacks A and B down by one position.

## Installation
To install and run `push_swap`:

1. Clone the repository:
   ```bash
   git clone https://github.com/username/push_swap.git
   cd push_swap
2. Compile the Project:
   ```bash
   make
3. Start the Program:
   ```bash
   ./push_swap 5 2 9 1 6
## Usage
To sort a stack of integers, run the `push_swap` executable with the integers you want to sort as command-line arguments. The program will output the sequence of operations required to sort the stack.

### Example:

    ```bash
    ./push_swap 5 2 9 1 6

## Algorithm Overview
The `push_swap` project uses the Radix Sort algorithm to efficiently sort the stack of integers. Radix Sort is a non-comparative sorting algorithm that processes integers digit by digit, starting from the least significant digit to the most significant digit. This method is particularly efficient for sorting large datasets.

### Key Aspects:
- **Radix Sort**: Implements the Radix Sort algorithm for sorting integers. It sorts numbers by processing individual digits, which allows it to achieve efficient sorting with fewer operations compared to comparison-based algorithms.
- **Stack Operations**: Optimizes the use of basic stack operations to align with the Radix Sort process.

## Requirements
- **Operating System**: Linux or macOS.
- **Libraries**: Standard C library.
- **Compiler**: GCC or compatible C compiler.

## Project Details
- **Language**: C
- **Algorithm**: Radix Sort
- **42 School Project**: Push_Swap

## Credits
Developed by Adhil as part of the 42 School curriculum.

