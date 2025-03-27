# _printf - Custom Implementation of printf

## Description
`_printf` is a custom implementation of the standard C library function `printf`. It replicates its core functionality, handling format specifiers such as `%c`, `%s`, `%d`, and `%i` to produce formatted output.

## Features
- Handles the following conversion specifiers:
    - `%c` → Prints a single character
    - `%s` → Prints a string
    - `%d` / `%i` → Prints an integer
    - `%%` → Prints a literal `%`
- Does not handle flag characters, field width, precision, or length modifiers.
- Outputs to `stdout`.

## Makefile Usage

The Makefile provides easy commands to build, test, and manage your project.

## Available Make Commands

### Build and Test
```bash
make test
```
Performs the following actions:
- Compiles all source files
- Compiles test files
- Creates the executable
- Runs the test executable immediately

### Clean Project
```bash
make clean
```
Cleans up the project directory by:
- Removing all compiled object files
- Deleting the executable
- Helping maintain a clean project structure

## Example Workflow

```bash
# Compile and run tests
make test

# Clean previous builds
make clean

# Rebuild the project
make test
```

## Repository Structure
The repository is organized as follows:
- **`main.h`**: Header file with function prototypes.
- **`_printf.c`**: Core implementation of the `_printf` function.
- **`data_functions.c`**: Helper functions used by `_printf`.
- **`handle_format.c`**: Handles function modifiers for `_printf`.
- **`tests/`**: Directory containing test cases for validating the implementation.
- **`man_printf`**: Man page documentation for `_printf`.
- **`README.md`**: Project documentation.

## Authors
The project is developed by the following individuals:
- **Ian Gibson**: Main contributor.
- **Jin Liu**: Main contributor.
- **Sammy Hill**: Main contributor.
