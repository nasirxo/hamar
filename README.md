# Hamar Interpreter

**Hamar** is a simple, interpreted programming language with a syntax inspired by several languages. It supports:
- Arithmetic operations (with custom operators like `jama` for addition, `mandi`/`manfi` for subtraction, etc.)
- String concatenation using the underscore (`_`) operator
- Basic control structures (if: `ko`, while: `kala`)
- Function definitions (`opejana`), function calls, and return statements (`raka`)
- Array literals and indexing
- Built-in file I/O with custom functions:
  - **`kolawka(filename, mode)`**  
    Opens a file for reading (`mode = 0`) or writing (`mode = 1`).
  - **File object methods:**
    - **`olika(...)`** (or renamed to your custom method, e.g. `lika`): writes to a file.
    - **`katka(separator)`**: splits file content by the given separator.
- Built-in plotting using ASCII graphics via the `plot` function with borders and axis labels.
- Additional built-in functions for array operations:
  - **`addka(...)`**: append to an array.
  - **`oshmara(array)`**: returns the length of an array.
  - **`jamaka(array)`**: returns the sum of numeric elements in an array.
- Built-in input function `oghwara(prompt)` to read input from the user.

## Features

- **Arithmetic & Comparison:** Supports integer and floating‑point arithmetic, modulo (using `%` or `takseembaki`), and comparisons.
- **String Operations:** Use underscore (`_`) for concatenation.
- **Arrays:** Create arrays using comma-separated values inside parentheses. Supports indexing (e.g. `a[0]`).
- **File I/O:** Open files with `kolawka()`, read lines via indexing or splitting (`katka`), and write via `olika` (or `lika`).
- **Plotting:** Use `plot("f", x_min, x_max, width, height)` to generate an ASCII plot of a function.
- **Member Methods:** Support for method calls (dot operator) for file and array objects.
- **Interactive Mode:** A simple REPL that shows a banner with copyright.


