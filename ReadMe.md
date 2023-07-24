# Push Swap Project

![Project Status](https://img.shields.io/badge/status-complete-brightgreen.svg)

![push_swap](https://imgur.com/QlUdBJ5)

## Description

The idea is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “operations”. The main goal of this project is to organize Stack A in as few actions as possible.The operations allowed for this task are described as follows:

- **`sa`** : **swap a** - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements).
- **`sb`** : **swap b** - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements).
- **`ss`** : **`sa`** and **`sb`** at the same time.
- **`pa`** : **push a** - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.
- **`pb`** : **push b** - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.
- **`ra`** : **rotate a** - shift up all elements of stack A by 1. The first element becomes the last one.
- **`rb`** : **rotate b** - shift up all elements of stack B by 1. The first element becomes the last one.
- **`rr`** : **`ra`** and **`rb`** at the same time.
- **`rra`** : **reverse rotate a** - shift down all elements of stack A by 1. The last element becomes the first one.
- **`rrb`** : **reverse rotate b** - shift down all elements of stack B by 1. The last element becomes the first one.
- **`rrr`** : **`rra`** and **`rrb`** at the same time.


## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Algorithm](#algorithm)
- [Contributing](#contributing)

## Getting Started

### Prerequisites

- C Compiler (gcc/clang)
- GNU Make

### Installation

1. Clone the repository:

```sh
git clone https://github.com/williamroocha/push_swap.git
```

2. Navigate to the project directory:

```sh
cd push_swap
```

3. Compile the project:
```sh
make
```

## Usage

Once the project is compiled, you can use it to sort a list of integers. Here's how to run the program:
```sh
./push_swap arg1 arg2 arg3 ...
```

Replace `arg1`, `arg2`, etc., with the integers you want to sort.

The program will output a series of instructions (swap, rotate, reverse rotate, etc.) to sort the stack. You can use these instructions to sort the stack manually or use the provided checker program.

To use the checker program, pipe the output of push_swap to it:
```sh
./push_swap arg1 arg2 arg3 ... | ./checker_linux arg1 arg2 arg3 ...
```


The checker will validate whether the stack is sorted correctly after executing the instructions.

## Algorithm

1. Find the mean value of the numbers in stack A.
2. Iterate through the numbers in stack A:
   - If the number is below the mean value, push it to stack B.
   - If the number is above the mean value, rotate stack A.
3. Repeat steps 1 and 2 until stack A has 5 elements.
4. Organize the remaining 5 elements in stack A using a predefined set of operations.
5. Find the "best friend" of each number in stack B:
   - The "best friend" is the number in stack A that is bigger than the number in stack B.
   - Perform a series of operations to bring the best friend of each number to the top of stack A.
6. Combine the two stacks to have a fully sorted stack A.

## Tools

I can’t recommend this push_swap visualizer enough. This tool was made for push_swap and it really helped me optimize my code.

https://github.com/o-reo/push_swap_visualizer


## Contributing

Contributions are welcome! If you have any ideas, suggestions, or improvements, feel free to open an issue or create a pull request.

