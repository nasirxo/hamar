# Hamar Interpreter

**Hamar** is a simple, interpreted programming language inspired by Python and other scripting languages. It features a localized syntax with custom keywords and operators, indentation-based blocks, built-in file I/O, ASCII plotting, array manipulation, and more. Hamar is designed to be self-contained and does not require external libraries.

## Table of Contents

- [Overview](#overview)
- [Language Features](#language-features)
  - [Data Types](#data-types)
  - [Variables](#variables)
  - [Operators](#operators)
  - [Control Structures](#control-structures)
  - [Functions](#functions)
  - [Arrays](#arrays)
  - [File I/O](#file-io)
  - [Plotting](#plotting)
  - [Input](#input)
- [Program Structure and Syntax](#program-structure-and-syntax)
- [Examples](#examples)
- [Installation and Compilation](#installation-and-compilation)
- [Repository Setup on GitHub](#repository-setup-on-github)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Overview

Hamar is an interpreted language with an emphasis on simplicity and ease-of-use. It uses indentation to define blocks (like Python) and incorporates several unique, localized keywords and operators. In addition to basic arithmetic and control structures, Hamar offers built-in functions for file I/O, ASCII plotting, and array manipulation.

## Language Features

### Data Types

- **Integer:** e.g., `42`
- **Double:** e.g., `3.14`
- **String:** e.g., `"Hello"` (supports both single and double quotes)
- **Array:** e.g., `(1, 2, 3)` creates an array of numbers (or strings)
- **File Object:** Created using `kolawka(filename, mode)`  
  (mode `0` for reading, mode `1` for writing)

### Variables

Variables are declared using assignment:

```hamar
a = 10
name = "Hamar"
nums = (1, 2, 3)
```

Variable names must begin with a letter and may include letters, numbers, and underscores.

### Operators

Hamar supports the following operators:

- Addition: `+` or keyword `jama`
- Subtraction: `-` or keywords `mandi` / `manfi`
- Multiplication: `*` or `zarab`
- Division: `/` or `takseem`
- Power: `^`
- Modulo: `%` or `takseembaki`
- String Concatenation: `_`  
  (If either operand is a string, the operation concatenates them.)
- Member Access: `.`  
  (Used to call methods on objects such as file objects or arrays.)

### Control Structures

#### If Statements
Use the `ko` keyword:
```hamar
ko a > 10:
    olika "a is greater than 10"
```

#### While Loops
Use the `kala` keyword:
```hamar
kala a < 10:
    a = a + 1
```

### Functions

Functions are defined with `opejana` and return values with `raka`:

```hamar
opejana square(x):
    raka x * x

olika square(5)  // Outputs 25
```

### Arrays

Arrays are created by listing comma-separated values inside parentheses:

```hamar
nums = (1, 2, 3)
olika nums[0]  // Prints 1
```

Additional built-in array functions include:
- `addka(element)`: Appends an element to an array
- `oshmara(array)`: Returns the length of an array
- `jamaka(array)`: Returns the sum of numeric elements in an array

### File I/O

Hamar provides basic file operations via the built-in function `kolawka`:

#### Open a File for Reading:
```hamar
a = kolawka("input.txt", 0)
```
You can then access individual lines using indexing (e.g., `a[0]`) or split the content using `katka(separator)`.

#### Open a File for Writing:
```hamar
b = kolawka("output.txt", 1)
b.lika("Hello, Hamar!")
```

File Methods:
- `lika(string)`: Writes a string to a file (only valid if the file is open in write mode)
- `katka(separator)`: Splits file content by the given separator (only valid if the file is open in read mode)

### Plotting

Hamar can generate ASCII plots using the built-in `plot` function:

```hamar
plot("f", x_min, x_max, width, height)
```

This command:
- Takes a function name (as a string) and samples the function over the x-range [x_min, x_max]
- Draws the plot in a grid of the specified width and height
- Displays borders and axis labels (with numerical markers) on both axes

### Input

Use `oghwara(prompt)` to read input from the user:

```hamar
name = oghwara("Enter your name: ")
olika "Welcome, " _ name
```

## Program Structure and Syntax

- Statements are written one per line
- Indentation is used to define blocks (for functions, if statements, loops)
- Comments start with `//` and continue until the end of the line
- Functions and control structures require a header ending with a colon (`:`) followed by an indented block

Example Structure:
```hamar
// Function to greet the user
opejana greet(name):
    olika "Hello, " _ name

// Main program
userName = oghwara("Enter your name: ")
greet(userName)
```

## Examples

### Function & Plotting Example
```hamar
opejana square(x):
    raka x * x

plot("square", 0, 10, 40, 10)
```

### File I/O Example
```hamar
// Open a file for writing and write to it
a = kolawka("output.txt", 1)
a.lika("Hello, Hamar!")

// Open the same file for reading and display the first line
b = kolawka("output.txt", 0)
olika b[0]
```

### Array Operations Example
```hamar
nums = (1, 2, 3)
nums.addka(4)
olika nums           // Output: [1, 2, 3, 4]
olika oshmara(nums)  // Outputs the length: 4
olika jamaka(nums)   // Outputs the sum: 10
```


## Contributing

Contributions are welcome! Please:
1. Fork the repository
2. Create a new branch for your feature/bug fix
3. Open a pull request

For major changes, open an issue first to discuss your idea.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Contact

For questions or feedback, contact the developer at nasiraliphy@gmail.com
