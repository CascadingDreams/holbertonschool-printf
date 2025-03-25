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

## Project Requirements
- Written in C.
- Compiled on Ubuntu 20.04 LTS using `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Follows the Betty coding style.
- No use of global variables.
- Maximum of 5 functions per file.
- Includes a `README.md` and a man page.
- Includes a header file `main.h` with function prototypes.
- Uses `write`, `malloc`, `free`, and variadic functions (`va_list`, `va_start`, `va_end`, `va_copy`, `va_arg`).

## Repository Structure
The repository is organized as follows:
- **`main.h`**: Header file with function prototypes.
- **`_printf.c`**: Core implementation of the `_printf` function.
- **`data_functions.c`**: Helper functions used by `_printf`.
- **`tests/`**: Directory containing test cases for validating the implementation.
- **`man_printf`**: Man page documentation for `_printf`.
- **`README.md`**: Project documentation.

## Authors
The project is developed by the following individuals:
- **Ian Gibson**: Main contributor.
- **Jin Liu**: Main contributor.
- **Sammy Hill**: Main contributor.
