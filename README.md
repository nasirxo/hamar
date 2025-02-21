# Hamar Interpreter

**Hamar** is a simple, interpreted programming language developed by Nasir Ali, inspired by Python and designed with Pashto-language keywords. It features indentation-based blocks, built-in file I/O, ASCII plotting, array manipulation, and an interactive REPL. Hamar is self-contained and emphasizes simplicity.

The name has a funny story behind it. While I was coding it, I designed the syntax to be similar to Python. In Pashto, "mar" means Python, so my friend Shah Faisal jokingly called it "hamar" (which is "funny"), and the name just stuck! 😂

This project started as a fun experiment, but it turned into an advanced and rewarding journey where I learned a lot. After countless hours of coding and debugging, hamar is now available for both Windows and Linux!


## Table of Contents

- [Installation](#installation)
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
  - [Modules](#modules)
- [Built-in Functions](#built-in-functions)
- [Examples](#examples)
- [Interactive Shell](#interactive-shell)
- [Extending with Native Functions](#extending-with-native-functions)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/nasirxo/hamar
   cd hamar
   ```

2. Run the interpreter:
   ```bash
   ./hamr
   ```

**Dependencies**:
- On Ubuntu/Debian, install `libreadline-dev`:
  ```bash
  sudo apt-get install libreadline-dev
  ```

---

## Language Features

### Data Types
- **Integer**: `42`
- **Double**: `3.14`
- **String**: `"Hello"` or `'World'`
- **Array**: `(1, "two", 3.0)`
- **File Object**: Created via `kolawka(filename, mode)`

### Variables
Assign values directly:
```hamar
a = 10
text = "Hamar"
nums = (1, 2, 3)
```

### Operators
| Operation       | Syntax          | Example                   |
|-----------------|-----------------|---------------------------|
| Addition        | `+` or `jama`   | `5 + 3` → `8`             |
| Subtraction     | `-` or `manfi`  | `10 - 4` → `6`            |
| Multiplication  | `*` or `zarab`  | `2 * 3` → `6`             |
| Division        | `/` or `takseem`| `10 / 2` → `5`            |
| Modulo          | `%` or `takseembaki` | `7 % 3` → `1`       |
| Concatenation   | `_`             | `"Hello" _ "Hamar"` → `"HelloHamar"` |
| Member Access   | `.`             | `file.lika("text")`       |

### Control Structures

#### If Statements (`ko`)
```hamar
ko a > 10:
    olika "a is large"
```

#### While Loops (`kala`)
```hamar
kala a < 5:
    a = a + 1
```

#### For Loops (`che` and `we`)
Iterate over arrays:
```hamar
che num we (1, 2, 3):
    olika num
```

### Functions
Define functions with `opejana` and return with `raka`:
```hamar
opejana add(a, b):
    raka a + b
```

### Arrays
- Create: `nums = (1, 2, 3)`
- Access: `nums[0]` → `1`
- Append: `nums.addka(4)`
- Length: `oshmara(nums)`
- Sum: `jamaka(nums)`

### File I/O
- **Read Mode** (`0`):
  ```hamar
  file = kolawka("data.txt", 0)
  content = file.katka("\n")  // Split by newline
  ```
- **Write Mode** (`1`):
  ```hamar
  file = kolawka("output.txt", 1)
  file.lika("Hello, Hamar!")
  ```

### Plotting
Generate ASCII plots with `plot`:
```hamar
opejana f(x):
    raka x * x

plot("f", 0, 10, 40, 10)  // Plots f(x) from 0 to 10
```

### Input
Read user input with `oghwara`:
```hamar
name = oghwara("Enter name: ")
olika "Hello, " _ name
```

### Modules
Import other Hamar files using `import` or `rawala`:
```hamar
import "math_helpers"  // Imports math_helpers.hamar
```

---

## Built-in Functions

| Function         | Description                              | Example                     |
|------------------|------------------------------------------|-----------------------------|
| `jorkanumbers`   | Generate a range                         | `jorkanumbers(1, 5)` → `(1,2,3,4)` |
| `abs`            | Absolute value                           | `abs(-5)` → `5`             |
| `max`/`min`      | Maximum/minimum of values or array       | `max(2, 5, 3)` → `5`        |
| `ohaya`          | List directory contents                  | `ohaya()` → `["file1", "dir"]` |
| `kolawka`        | Open a file                              | `kolawka("file.txt", 0)`    |

---

## Interactive Shell Commands
- `ozaa` or `exit`: Quit the interpreter.
- `safaka` or `rwakeka`: Clear the screen.
- `ohaya` or `ls`: List directory contents.

---

## Extending with Native Functions
Hamar supports native C++ functions. Example:
```cpp
// Register a function in C++
Value native_add(const vector<Value>& args) {
    return Value(args[0].intValue + args[1].intValue);
}

int main() {
    nativeFunctions["add"] = native_add;
    // ...
}
```
Recompile to use in Hamar scripts.

---

## Examples

### For Loop with Range
```hamar
che i we jorkanumbers(0, 5):
    olika i  // Prints 0,1,2,3,4
```

### Importing Modules
**math.hamar**:
```hamar
opejana square(x):
    raka x * x
```
**main.hamar**:
```hamar
import "math"
olika square(5)  // Output: 25
```

### File Operations
```hamar
// Write to file
file = kolawka("log.txt", 1)
file.lika("Log entry")

// Read and split content
file = kolawka("log.txt", 0)
lines = file.katka("\n")
olika lines[0]
```

---

## Contributing
Contributions are welcome! Fork the repository, create a feature branch, and submit a pull request. For major changes, open an issue first.

---

## License
MIT License. See [LICENSE](LICENSE) for details.

---

## Contact
Nasir Ali – nasiraliphy@gmail.com
