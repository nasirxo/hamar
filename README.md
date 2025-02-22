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

# Hamar 1.4.0 Release Notes

## New Features with Examples

1. Dictionary Improvements
   ```hamar
   // Create a dictionary
   dict = {"name": "Ali", "age": 25}
   
   // Access values
   olika dict["name"]    // Output: Ali
   
   // Add/update values
   dict["city"] = "Peshawar"
   dict["age"] = 26
   
   // Check if key exists
   ko "name" we dict:
       olika "Name exists!"
   ```

2. Statistical Functions
   ```hamar
   nums = (2, 4, 4, 4, 5, 5, 7)
   
   olika mean(nums)      // Output: 4.428571
   olika median(nums)    // Output: 4
   olika mode(nums)      // Output: 4
   olika variance(nums)  // Output: 2.2857
   olika stddev(nums)    // Output: 1.5118
   olika range(nums)     // Output: 5
   
   // Get complete statistical summary
   stats = summary(nums)
   olika stats  // Shows min, max, mean, median, mode, variance, stddev
   ```

3. Mathematical Functions
   ```hamar
   // Find root of equation f(x) = x^2 - 4
   opejana f(x):
       raka x * x - 4
   
   root = findroot(f, 1, 0.0001)  // Start at x=1, tolerance=0.0001
   olika root  // Output: 2.0
   
   // Curve fitting
   x = (1, 2, 3, 4, 5)
   y = (2.1, 4.2, 6.1, 8.2, 10.1)
   coeffs = curvefit(x, y, 1)  // Linear fit
   olika coeffs  // Output: approximate (2, 0.1)
   
   // Eigenvalues
   matrix = ((4, -2), (-2, 4))
   values = eigenvalue(matrix)
   olika values  // Output: (6, 2)
   ```

4. Array Operations
   ```hamar
   // Parallel mapping
   nums = (1, 2, 3, 4, 5)
   opejana square(x):
       raka x * x
   
   squares = map(square, nums)
   olika squares  // Output: (1, 4, 9, 16, 25)
   
   // Visualize array
   plotarray(nums)
   /*
   Output:
   5 |    *
   4 |   *
   3 |  *
   2 | *
   1 |*
   */
   
   // Random selection
   olika choice(nums)  // Outputs random element from nums
   ```

5. File Operations
   ```hamar
   // Read CSV file
   data = readcsv("data.csv")
   olika data[0]  // First row
   
   // Improved file handling
   file = kolawka("test.txt", 1)
   ko file.lika("Hello"):  // Returns success status
       olika "Write successful"
   ```

6. System Integration
   ```hamar
   // Execute system commands
   system("ls -l")
   
   // Dynamic code loading (Linux)
   loadcode("mylib.so")
   result = callfunc("my_function", 42)
   ```

7. Random Number Generation
   ```hamar
   // Integer range
   olika random(1, 10)  // Random integer 1-10
   
   // Float range with better distribution
   olika random(0.0, 1.0)  // Random float 0-1
   ```

8. Error Handling
   ```hamar
   // Better error messages with location
   ko 1/0:  // Triggers error
   /* Output:
   Runtime Error: Division by zero
     at test.hamar:2:5
   
   ko 1/0:
      ^
   */
   ```

## Technical Usage Examples

1. Thread-safe Operations
   ```hamar
   // Parallel array processing
   nums = jorkanumbers(1, 1000000)
   result = map(square, nums)  // Processes in parallel
   ```

2. Enhanced Numeric Precision
   ```hamar
   // High precision calculations
   x = 1.23456789012345
   y = 9.87654321098765
   olika x * y  // Maintains precision
   ```

3. Memory Management
   ```hamar
   // Dictionaries with complex values
   dict = {}
   dict["data"] = (1, 2, 3)
   dict["nested"] = {"x": 10}
   // Memory is properly managed
   ```

## Platform-specific Features

### Linux
```hamar
// Dynamic library loading
loadcode("/usr/lib/mylib.so")
result = callfunc("process_data", (1,2,3))
```

### Windows
```hamar
// System commands
system("dir")
system("cls")  // Clear screen
```

These examples demonstrate the new capabilities in Hamar 1.4.0. Each feature has been designed to be intuitive while providing powerful functionality.

## Bug Fixes
- Fixed dictionary value dereferencing
- Improved memory management
- Enhanced type checking
- Better error reporting

## Technical Improvements
- Thread-safe operations
- Parallel processing support
- Enhanced numeric precision
- Better memory management with shared pointers

## Platform Support
- Full support for Linux
- Basic support for Windows
- Improved cross-platform compatibility

---

## Contributing
Contributions are welcome! Fork the repository, create a feature branch, and submit a pull request. For major changes, open an issue first.

---

## License
MIT License. See [LICENSE](LICENSE) for details.

---

## Contact
Nasir Ali – nasiraliphy@gmail.com